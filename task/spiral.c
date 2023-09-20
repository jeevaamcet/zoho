#include <stdio.h>
#define m 100

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

void spiral()
{
    int j, l , p;

    for (int i = 0; i < r; i++)
    {
        for ( int j = 0; j < c; j++)
        {
            b[l++][p++] = a[i][j];
        }
        for( int k = 0; k < r; k++)
        {
            b[l++][p++] = a[k][c];
        }
        r--;
        for( int j = c; j >=i; j--)
        {
            b[l++][p++] = 
        }

    }
}

void main()
{
    int arr[m][m], r, c, rot_arr[m][m];

    printf("Enter the rows and column ");
    scanf("%d %d", &r, &c);

    get_arr(arr, r, c);
}