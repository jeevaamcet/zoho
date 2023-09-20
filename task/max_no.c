#include <stdio.h>

int max(int *arr, int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[0];
}

int main()
{
    int arr[50], n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The max of given array is %d\n", max(arr,n));
}