#include <stdio.h>

int main()
{
    int n;

    printf("enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i < (2 * n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((i == 1) || (i == n) || (i == 2 * n - 1)) && ((j > 0) && (j < n - 1)))
            {
                printf("*");
            }
            else if (((j == 0) || (j == n - 1)) && ((i > 1) && (i != n) && (i < 2 * n - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}