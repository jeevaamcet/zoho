#include <stdio.h>

int main()
{
    int n, j, i, k, l = 0;

    printf("enter the number of rows : ");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (k = 0; k < l; k++)
        {
            printf(" ");
        }
        for ( int m = 0; m < ((n)-(l/2)); m++)
        {
            printf("*");
        }
        l +=2;
        printf("\n");
    }
}