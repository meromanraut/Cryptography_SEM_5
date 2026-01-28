//1. find the gcd of two given number using eculiden algorithm

#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {

    int num1, num2;
    printf("\n");
    printf("GCD Calculation using Euclidean Algorithm\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}