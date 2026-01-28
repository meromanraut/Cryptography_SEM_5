// 2. check if the given two number is co prime or not relatively prime

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
    printf("co-prime (relatively prime)\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (gcd(num1, num2) == 1) {
        printf("%d and %d are co-prime (relatively prime).\n", num1, num2);
    } else {
        printf("%d and %d are not co-prime (not relatively prime).\n", num1, num2);
    }
    
    return 0;
}