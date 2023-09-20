#include <stdio.h>

void main()
{
    int n, a[50][50], j, i = 0, zero_c, num_c;

    printf("Enter the number of rows and column :");
    scanf("%d", &n);

    printf("Enter the elements of the 2d array ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(*(*(a+i)+j) == 0)
            {
                zero_c++;
            }
            else
            {
                num_c++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        
        printf("\n\n");
    }
        
    if(zero_c > num_c)
    {
        printf("The matrics is sparse ");
    }
    else
    {
        printf("The given matrics is not sparse ");
    }
}