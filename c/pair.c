#include <stdio.h>

void pair(int *a, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( (*(a + i) > *(a + j)) && i < j)
            {
                printf("( %d , %d )\n", *(a + i), *(a + j));
                count++;
            }
        }
    }

    printf("The %d number of pairs to be obtained \n",count);
}

void main()
{
    int a[50], n;

    printf("Enter the number of elements in array :");
    scanf("%d", &n);

    printf("Enter the elements of array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    pair(a,n);
    
}