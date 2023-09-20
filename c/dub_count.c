#include <stdio.h>

int sort(int *a, int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return *a;
}

int dub_c(int *arr, int n)
{
    int i = 0, j = 1, rep = 0;

    while(i < n)
    {
        if(arr[j] == arr[i])
        {
            rep++;
            while ( arr[j] == arr[i])
            {
                i++;
            }
            j = i;
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
    return rep;
}

int main()
{
    int arr[50], n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr,n);

    printf("%d", dub_c(arr,n));
}