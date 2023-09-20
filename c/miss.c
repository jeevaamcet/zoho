#include <stdio.h>

void prt(int *a, int n)
{
    for ( int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

void main()
{
    int a[100], n, i = 0, j, rep;

    printf("Enter the number of elements in array :");
    scanf("%d", &n);

    printf("Enter the elements in array :");
    while ( i < n)
    {
        scanf("%d", a + i);
        i++;
    }

    i = 0;

    while (i < n - 2)
    {
        j = i + 1;
        if (a[i] == a[j])
        {
            rep = a[j];
            printf("The dublicate number is %d \n", rep);
        }
        // if (a[i] == a[j] - 1)
        // {
        //     i++;
        //     j++;
        // }
        if( (a[j] + 1) != a[j + 1])
        {
            printf("The missing number is %d\n",a[j + 1] - 1);
            a[j] = a[j + 1] - 1;
            i = 0;

        }
        i++;
        j++;
    }

    // prt(a,n);
}