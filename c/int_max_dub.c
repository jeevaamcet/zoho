#include <stdio.h>

int main()
{
    int a[50], n, count, j = 1;

    int *p = &n;

    printf("Enter the number of elements ");
    scanf("%d", p);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    for (int i = 0; i < n;)
    {
        count = 1;

        if (*(a + i) == *(a + j))
        {
            while (*(a + i) == *(a + j))
            {
                count++;
                j++;
            }
            printf("\nThe %d is present %d times \n", *(a + i), count);
            i = j;
            j++;
        }
        else
        {
            printf("The %d is present %d times \n", *(a + i), count);
            i++;
            j++;
        }
    }

    return 0;
}