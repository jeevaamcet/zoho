#include <stdio.h>

int main()
{
    int n, l, k, m;

    printf("enter the rows : ");
    scanf("%d", &n);

    l = n;

    for (int i = n, m = 1; i > 0; i--, m++)
    {
        for (int j = 0; j < l; j++)
        {   
            ( j < i - 1)?({printf("  ");k = m - 1;}):(j < n)?(printf("%d ", ++k)):(printf("%d ", --k));
        }
        l++;
        printf("\n");
    }
    return 0;
}