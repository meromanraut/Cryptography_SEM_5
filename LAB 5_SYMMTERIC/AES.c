#include <stdio.h>

unsigned char sbox[256] = {
0x63,0x7c,0x77,0x7b,0xf2,0x6b,0x6f,0xc5,
0x30,0x01,0x67,0x2b,0xfe,0xd7,0xab,0x76
};

void keyExpansion(unsigned char key[16], unsigned char expandedKey[176])
{
    int i;

    for(i=0;i<16;i++)
        expandedKey[i] = key[i];

    for(i=16;i<176;i++)
        expandedKey[i] = expandedKey[i-16] ^ expandedKey[i-1];
}

int main()
{
    unsigned char key[16];
    unsigned char expandedKey[176];

    int i;

    printf("Enter 16-byte key:\n");

    for(i=0;i<16;i++)
        scanf("%hhx",&key[i]);

    keyExpansion(key,expandedKey);

    printf("\nExpanded Keys:\n");

    for(i=0;i<176;i++)
    {
        printf("%02x ",expandedKey[i]);

        if((i+1)%16==0)
            printf("\n");
    }

    return 0;
}