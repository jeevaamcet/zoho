#include <stdio.h>

int get_arr(int *a, int n)
{
    printf("enter the array elements : ");
    for( int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main()
{
    int a[50], b[50], n1, n2, pos, k = 0;

    printf("enter the number of elements of first array : ");
    scanf("%d", &n1);
    

    printf("enter the number of elements of second array : ");
    scanf("%d", &n2);

    get_arr(a,n1);
    get_arr(b,n2);

    printf("enter the position to insert : ");
    scanf("%d", &pos);

    for(int i = pos; i < n1+n2; i++)
    {
        a[i] = a[i-1];
        a[i-1] = b[k++];
    }

    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",a[i]);
    }
}