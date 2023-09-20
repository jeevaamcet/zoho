#include <stdio.h>

int ceil(int *a, int n)
{
    int x, i, flag = 0;

    printf("Enter the number to find ceiling :");
    scanf("%d", &x);

    i = x+1;

    while (i < *(a+n-1))
    {
        for (int j = 0; j < n; j++)
        {
            if (i == *(a + j))
            {
                flag = 1;
                printf("The ceiling of %d is %d \n", x, *(a+j));
                break;
            }
        }
        i++;
        if( flag == 1)
        {
            break;
        }
    }
}

void main()
{
    int a[50], n;

    printf("Enter the number of elements in array :");
    scanf("%d", &n);

    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", a+i);
    }

    

    ceil(a,n);

}