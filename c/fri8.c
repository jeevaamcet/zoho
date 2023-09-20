#include <stdio.h>

void get_arr(int a[50], int n)
{
    printf("Enter the array elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void prt(int a[50], int n)
{
    printf("The array elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void arrange(int a[50], int b[50], int n)
{
    int i = 0, j = 0;
    while( i < n)
    {
        if (i % 2 == 0 && a[i] > a[i + 1])
        {
            j = a[i];
            a[i] = a[i + 1];
            a[i + 1] = j;
        }
        if
    }
}

void main()
{
    int a1[50], a2[50], n;

    printf("Enter the number of elements in array :");
    scanf("%d", &n);

    get_arr(a1, n);

    get_arr(a2, n);

    prt(a1, n);

    printf("\n");

    prt(a2, n);

    concatenate(a1, a2, n);

    printf("\nAfter concate the array ;\n");
    prt(a1, 2*n);
    
}
