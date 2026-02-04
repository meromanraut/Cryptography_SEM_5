
//4. Find primitive roots of given number.

#include <stdio.h>
#include <math.h>

int powerMod(int a, int b, int m) {
    int result = 1;
    while (b > 0) {
        if (b & 1)
            result = (result * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return result;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int totient(int n) {
    int result = n;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

void primitiveRoots(int n) {
    int phi = totient(n);
    printf("Primitive roots of %d are:\n", n);

    for (int g = 2; g < n; g++) {
        if (gcd(g, n) != 1)
            continue;

        int flag = 1;
        for (int k = 1; k < phi; k++) {
            if (powerMod(g, k, n) == 1) {
                flag = 0;
                break;
            }
        }

        if (flag && powerMod(g, phi, n) == 1)
            printf("%d ", g);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    primitiveRoots(n);
    return 0;
}
