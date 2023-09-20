#include <stdio.h>
#include <string.h>
#define m  50

int main()
{
    char a[m], b[m];
    int n, k = 0;

    printf("enter the strinf to expand : ");
    scanf("%s%n", a, &n);

    for ( int i = 0; i < n; i++)
    {
        if(a[i] > 48 && a[i] < 57) 
        {
            for (int j = 1; j < (a[i] - 48); j++)
            {
                b[k] = b[k-1];
                k++;
            }
        }
        else 
        {
            b[k] = a[i];
            k++;
        }
    }
    b[k] = '\0';
    printf("%s\n",b);
}
