#include <stdio.h>

int main()
{
    int n, k = 1;

    printf("enter the number of rows ");
    scanf("%d", &n);

    for ( int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    
    return 0;
}