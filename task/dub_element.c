#include <stdio.h>

void get_arr(int *a, int n)
{
     printf("Enter the elements of array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
}

void sort(int *a, int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
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
    int arr[50], n, count;

    printf("Enter the number of elements in array :");
    scanf("%d", &n);

   

    sort(arr,n);

    for (int i = 0; i < n;)
    {
        for (int j = i+1; j <= n;)
        {
            count = 1;
            while( arr[i] == arr[j])
            {
                count++;
                j++;
            }
            if(count > 1)
            {
            printf("The %d elemnets has %d times repeated \n", arr[i], count);
            }
            i = j;
            j++;

        }
        i++;
    }
}