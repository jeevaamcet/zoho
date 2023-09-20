#include <stdio.h>

void main()
{
    int a[50], n, sum, i = 0, j;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the sum to check :");
    scanf("%d", &sum);

    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    printf("The array elements are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", *(a + i));
    }

    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if ((a[i] + a[j]) == sum)
            {
                printf("The %d and %d is equal to the given sum \n", *(a + i), *(a + j));
            }
            j++;
        }
        i++;
    }
}