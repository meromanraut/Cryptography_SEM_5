#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int i;

    printf("Enter plaintext: ");
    fgets(text, sizeof(text), stdin);

    printf("Encrypted text: ");

    for(i = 1; i < strlen(text); i += 2)
        printf("%c", text[i]);

    for(i = 0; i < strlen(text); i += 2)
        printf("%c", text[i]);

    return 0;
}

