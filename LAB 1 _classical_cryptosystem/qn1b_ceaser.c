//Hill Cipher LAB 1

#include <stdio.h>

int main() {
    int key[2][2] = {{3, 3}, {2, 5}};
    char text[3];
    int i;
    int result[2];
    printf("\n");
    printf("Hill Cipher Encryption\n");

    printf("Enter 2-letter plaintext: ");
    scanf("%s", text);

    for(i = 0; i < 2; i++) {
        result[i] = (key[i][0] * (text[0] - 'A') +
                     key[i][1] * (text[1] - 'A')) % 26;
    }

    printf("Encrypted text: ");
    for(i = 0; i < 2; i++) {
        printf("%c", result[i] + 'A');
    }

    return 0;
}
