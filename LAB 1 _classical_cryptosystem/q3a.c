#include <stdio.h>
#include <string.h>

int main() {
    char text[100], rail1[100], rail2[100];
    int i, j = 0, k = 0;

    printf("\n");
    printf("Rail Fence Cipher Encryption\n");
    printf("Enter plaintext: ");
    gets(text);

    for(i = 0; i < strlen(text); i++) {
        if(i % 2 == 0)
            rail1[j++] = text[i];
        else
            rail2[k++] = text[i];
    }

    rail1[j] = '\0';
    rail2[k] = '\0';

    printf("Encrypted text: %s%s", rail1, rail2);

    printf("\nRail Fence Cipher Encryption\n");

    return 0;
}
