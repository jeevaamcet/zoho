#include <stdio.h>

void diamond (int n)
{
    int k = 2, m, o, l = 3;

    for(int i = 0; i < 2*n; i++)
    {
        if(i < n)
        {
            for(int j = n - 1; j >= 0; j--)
            {
                if(i < j)
                {
                    printf(" ");
                }
                else
                {
                    printf(" %d", --k);
                }
            }
            if(i == n - 2)
            {
                m = k;
                o = l;
                m += o;
            }
            k += l;
            l += 2;
            printf("\n");
        }
        else
        {

            for (int j = n; j < 2*n; j++)
            {
                if( i > j)
                {
                    printf(" ");
                }
                else
                {
                    printf(" %d", --m);
                }
            
            }

            printf("\n");
        }
    }
}

void main()
{
    int n;

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    diamond(n);
}