#include <stdio.h>
#define m 20

void rc_sum(int (*a)[m], int *row, int *col, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(row + i) += *(*(a + i) + j);
            *(col + i) += *(*(a + j) + i);
        }
    }
}

void prt(int (*a)[m], int *row, int *col, int r, int c )
{
    printf("The given matrix and its row and column sum is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        printf("\nThe row number %d sum is %d \n", i + 1, row[i]);
    }

    for (int i = 0; i < c; i++)
    {
        printf("\nThe col number %d sum is %d \n", i + 1, col[i]);
    }
}

int main()
{
    int a[m][m],r, c;
    static int row[m], col[m];

    printf("Enter the number of rows and column :");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of 2d array :");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }

    rc_sum(a,row,col,r,c);

    prt(a,row,col,r,c);

    return 0;
}