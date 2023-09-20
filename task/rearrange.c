#include <stdio.h>

void get_arr(int *a, int n)
{
    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void prt(int *a, int n)
{
    printf("The resulted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
}

void rearrange(int *a, int n)
{
    int temp;

    for (int i = 1; i < n; i+=2)
    {
        if ((i % 2) == 1)
        {
            if (a[i] < a[i - 1])
            {
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
            if (i != n-2)
            {
                if (a[i] < a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
    }
}

void main()
{
    int a[50], n;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    get_arr(a, n);

    rearrange(a, n);

    prt(a, n);
}