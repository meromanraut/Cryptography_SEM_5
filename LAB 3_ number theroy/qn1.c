// 1. Find totient of given Number.

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
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

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Totient φ(%d) = %d\n", n, totient(n));
    return 0;
}
