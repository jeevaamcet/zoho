#include <stdio.h>
int sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return *arr;
}
int main()
{

    int arr[50];
    int n;
    int *p;
    p = arr;

    printf("Enter the number of elements :\n");
    scanf("%d", &n);

    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
        
    }

    p = arr;
    sort(arr,n);

    printf("The elements of the array are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", *p);
        p++;
    }

    return 0;
}
