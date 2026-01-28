//monoalphabetic cipher (ceaser cipher)

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("\n");
    int i, key;
    printf("Enter a string to encrypt: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter key (shift value): ");
    scanf("%d", &key);
    for(i = 0; str[i] != '\0'; ++i)
    {
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' + key) % 26 + 'A';
            str[i] = ch;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            ch = (ch - 'a' + key) % 26 + 'a';
            str[i] = ch;
        }
    }
    printf("Encrypted string: %s", str);
    return 0;
}