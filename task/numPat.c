#include <stdio.h>

void prtPat(int n)
{
    int l = 3, k = 2, m;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if( i < j)
            {
                printf(" ");
            }
            else if( i >= j)
            {
                printf("%d ",--k);
            }
        }
        printf("\n");
        if( i < n-2)
        {
            k += l;
            l += 2;
        }
        else if( i == n-2)
        {
            m = k;
            k += l;
            l += 2;
        }
       
    }
    k += m;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if( i < j)
            {
                printf(" ");
            }
            else if( i >= j)
            {
                printf("%d ",--k);
            }
        }
        printf("\n");
    }
}

void main()
{
    int n;

    printf("Enter the number of rows to print : ");
    scanf("%d", &n);

    prtPat(n);
}