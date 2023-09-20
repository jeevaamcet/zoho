#include <stdio.h>
int *del(int arr[], int n, int in)
{

    int i = 0;

    while (i < n)
    {
        if (i >= in)
        {
            arr[i] = arr[i + 1];
        }
        i++;
    }

    return arr;
}
int main()
{

    int arr[50];
    int n, in;

    printf("Enter the no of elements :");
    scanf("%d", &n);

    printf("enter the index to remove :");
    scanf("%d", &in);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    del(arr, n, in);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}