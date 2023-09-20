#include <stdio.h>
#define m 20

void main()
{
    int a[m], e[m], o[m], n, k = 0, l = 0;

    printf("Enter the no of elements in array :");
    scanf("%d", &n);

    printf("Enter the elemens of array to seperate :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }

    for (int i = 0; i < n; i++)
    {
        if ( (*(a+i) % 2) == 0)
        {
            *(e+k++) = *(a+i);
        }
        else
        {
            *(o+l++) = *(a+i);
        }
    }

    printf("The even number of array is :\n");
    for ( int i = 0; i < k; i++)
    {
        printf("%d ", *(e+i));
    }

    printf("\n");

    printf("The odd number of array is :\n");
    for ( int i = 0; i < l; i++)
    {
        printf("%d ", *(o+i));
    }
}