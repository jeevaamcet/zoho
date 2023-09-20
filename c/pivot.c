#include <stdio.h>

void pivot(int *a, int n)
{
    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            left += *(a+j);
        }
        for (int k = n-1; k > i; k--)
        {
            right += *(a+k);
        }
        if (left == right)
        {
            printf("The %d is pivot element of the given array \n", *(a+i));
        }
        left = 0;
        right = 0;
    }
}

void main()
{
    int a[50], n; 

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }

    pivot(a,n);
}