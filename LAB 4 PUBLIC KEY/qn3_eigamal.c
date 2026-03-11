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
    long long x = 6; // private key
    long long y = modExp(g, x, p);

    long long message = 10;
    long long k = 3;

    long long c1 = modExp(g, k, p);
    long long c2 = (message * modExp(y, k, p)) % p;

    long long s = modExp(c1, x, p);
    long long decrypted = (c2 * modExp(s, p - 2, p)) % p;

    printf("Public Key (p,g,y): (%lld,%lld,%lld)\n", p, g, y);
    printf("Encrypted: (%lld,%lld)\n", c1, c2);
    printf("Decrypted: %lld\n", decrypted);

    return 0;
}
