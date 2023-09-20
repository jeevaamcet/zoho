#include <stdio.h>

int *powe(int p[50], int l)
{
    int r = 11;
    if(l == 0)
    {
        r = 1;
    }
    int i = l;
    while (i > 1 )
    {
        r = r*11;
        i--;
    }
     int j = 0;
    while( r != 0)
    {
        p[j] = r%10;
        r /= 10;
        j++;
    }

return p;
}

int main()
{
    int n, k, c = 0;
    int p[50];
    

    printf("enter the number of rows ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        powe(p,i);
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", p[k]);
            
        }
        printf("\n");
    }
    return 0;
}