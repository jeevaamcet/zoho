#include <stdio.h>
#define  m 100

void prt(int (*a)[m], int r, int c )
{
    printf("The rotated matrix is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}

void rotate(int (*a)[m], int (*b)[m], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = c-1, k = 0; j >= 0; j--, k++)
        {
            b[i][k] = a[j][i];
        }
    }
}

void get_arr(int (*a)[m], int r, int c)
{
    printf("Enter the elements of matrix :");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void main()
{
    int arr[m][m], r, c, rot_arr[m][m];

    printf("Enter the rows and column ");
    scanf("%d %d", &r, &c);

    get_arr(arr, r, c);

    rotate(arr, rot_arr, r, c);

    prt(rot_arr, r, c);
}