#include <stdio.h>

int SBOX[4][16] = {
    {14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
    {0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
    {4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
    {15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
};

int main() {

    int input[6];
    int i;

    printf("Enter 6-bit input (0 or 1):\n");

    for(i=0;i<6;i++)
        scanf("%d",&input[i]);

    int row = input[0]*2 + input[5];

    int column = input[1]*8 + input[2]*4 + input[3]*2 + input[4];

    int output = SBOX[row][column];

    printf("Row = %d\n",row);
    printf("Column = %d\n",column);
    printf("SBOX Output (Decimal) = %d\n",output);

    printf("Output in Binary: ");

    for(i=3;i>=0;i--)
        printf("%d",(output>>i)&1);

    return 0;
}