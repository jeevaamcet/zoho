#include <stdio.h>

void indexSort(int a[50], int n)
{
    int i = 0, k = 0, j = (n % 2 == 0)?(n - 1):(n - 2);

    while (k  < n)
    {
        if(k % 2 == 0)
        {
            printf("%d ", a[i]);
            i += 2;
        }
        else
        {
            printf("%d ", a[j]);
            j -= 2;
        }
        k++;
    }
}

void sort(int *a, int n)
{
    int temp;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void main()
{
    int arr[50], n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("The resultent array is : ");
    indexSort(arr, n);

    printf("\n");
}