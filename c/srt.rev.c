#include <stdio.h>
#define m 50
int main()
{
    int arr[m], n;
    int i  = 0; 

    printf("enter the number of elements un array");
    scanf("%d", &n);

    int j = n-1;

    printf("enter the elements of array to reverse : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    while(i < n / 2)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for ( int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}