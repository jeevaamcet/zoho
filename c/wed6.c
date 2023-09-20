#include <stdio.h>

int main()
{
    int a[20], n, max = 0, j, i =0;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf("Enter the elements of array :");
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }

    while(i < n)
    {
        j = i+1;
        while(j < n)
        {
            if (*(a + i) < *(a + j))
            {
                printf("The greater of %d is %d \n",*(a+i), *(a+j));
                break;
            }
            j++;
        }
        i++;
    }
}