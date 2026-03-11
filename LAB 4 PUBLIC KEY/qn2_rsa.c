#include <stdio.h>

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int p = 7, q = 11;
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e = 13, d = 37; // precomputed inverse

    int message = 9;

    long long cipher = modExp(message, e, n);
    long long decrypted = modExp(cipher, d, n);

    printf("Public Key (e,n): (%d,%d)\n", e, n);
    printf("Private Key (d,n): (%d,%d)\n", d, n);
    printf("Encrypted: %lld\n", cipher);
    printf("Decrypted: %lld\n", decrypted);

    return 0;
}
