#include <stdio.h>

int main()
{
    int n, r, c;

    printf("Enter the number of rows : ");
    scanf("%d",&n);

    r = n-1;
    c = 1;

    for( int i = 0; i < 2*n; i++)
    {
        for( int j = 0; j < r; j++)
        {
            printf(" ");
        }
        for ( int k = 0; k < c; k++)
        {
            printf("*");
        }
        if( i < n-1)
        {
            r--;
            c +=2;
        }
        else
        {
            r++;
            c -=2;
        }
        printf("\n");
        
    }
}