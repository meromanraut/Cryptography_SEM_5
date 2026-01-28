#include <stdio.h>
#include <string.h>

int main() {

    char p1, p2;
    printf("\n");
    printf("Simple Pairwise Swap Encryption\n");

    printf("Enter two letters: ");
    scanf(" %c %c", &p1, &p2);

    printf("Encrypted pair: %c%c", p2, p1);
    return 0;
}
