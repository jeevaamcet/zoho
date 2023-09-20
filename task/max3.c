#include <stdio.h>

int maxCount(int a[50], int n)
{
    int max = 1,count = 1, index;

    for (int i = 0; i < n; i++)
    {
        for ( int j = i + 1; j < n; j++)
        {
            if ( a[i] == a[j])
            {
                count++;
            }
        }

        if(max < count)
        {
            max = count;
            index = i;
        }
        count = 1;
    }

    printf("The max repeated number is %d at %d times \n", a[index], max);

    return index;

}

int arrange(int a[50], int n, int index)
{
    int n1 = n;

    for (int i = 0; i < n1; i++)
    {
        if(a[i] == a[index])
        {
            for (int j = i; j < n1; j++)
            {
                a[j] = a[j + 1];
            }
            n1--;
        }
    }
    n = n1;

    return n;

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

void main ()
{
    int arr[50], n, index;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements of array : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    
    for(int j = 0; j < 3; j++)
    {
        index = maxCount(arr,n);
        n = arrange(arr, n, index);
    }
}