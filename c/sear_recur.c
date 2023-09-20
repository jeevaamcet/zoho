#include <stdio.h>

int sear(int *a, int index, int x)
{
    if(a[index] == x)
    {
        return 1;
    }
    else if(index == 0 )
    {
        return 0;
    }
    else
    {
        return sear(a,index-1,x);
    }
}

int main()
{
    int a[50],n,x;

    printf("enter the number of elements  : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the number to search : ");
    scanf("%d",&x);

    printf("%d",sear(a,n,x));
}