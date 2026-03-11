#include <stdio.h>

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    long long p = 23, g = 5;
    long long a = 6, b = 15;

    long long A = modExp(g, a, p);
    long long B = modExp(g, b, p);

    long long keyAlice = modExp(B, a, p);
    long long keyBob = modExp(A, b, p);

    printf("Public key of Alice: %lld\n", A);
    printf("Public key of Bob: %lld\n", B);
    printf("Shared Key (Alice): %lld\n", keyAlice);
    printf("Shared Key (Bob): %lld\n", keyBob);

    return 0;
}
