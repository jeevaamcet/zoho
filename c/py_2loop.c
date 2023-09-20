#include <stdio.h>

int main()
{
    int n, a;

    printf("enter the number of rows : ");
    scanf("%d", &n);

    a = n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (j <= a)
            {
                printf(" ");
            }
            else 
            {
                printf("* ");
            }
        }
        printf("\n");
        a--;
    }
}