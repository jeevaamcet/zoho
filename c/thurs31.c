#include <stdio.h>

int sum(int n)
{
    int sum = 0;

    while( n != 0)
    {
        sum += n%10;
        n /= 10;
    }

   return sum;
}

int main()
{
    int arr[50], n, temp;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < i; j++)
        {   
            if( (sum(arr[i])) < (sum(arr[j])))
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for( int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

}