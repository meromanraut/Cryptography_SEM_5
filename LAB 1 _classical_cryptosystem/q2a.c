#include <stdio.h>
#include <string.h>

int main() {
    char text[100], key[100];
    int i, j = 0;
    printf("\n");
    printf("Vigenere Cipher Encryption\n");

    printf("Enter plaintext: ");
    gets(text);

    printf("Enter key: ");
    gets(key);

    for(i = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A') + (key[j] - 'A')) % 26 + 'A';
            j = (j + 1) % strlen(key);
        }
    }

    printf("Encrypted text: %s", text);
    printf("\nVigenere Cipher Encryption\n");
    return 0;
}
