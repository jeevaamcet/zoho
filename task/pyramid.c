#include <stdio.h>

int main()
{
    int n, r, c;

    printf("enter the number of rows to print : ");
    scanf("%d",&n);

    r = n;
    c = 1;

    for (int i = 0; i < n; i++)
    {
        for( int j = 0; j < r; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < c; k++)
        {
            printf("*");
        }
        c +=2;
        r--;
        printf("\n");
    }
    

}