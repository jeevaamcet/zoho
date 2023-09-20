#include <stdio.h>

void get_arr(int (*a)[100], int r, int c)
{
    printf("Enter the elements of array :");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }
}

void tran(int (*a)[100], int r, int c)
{
    int temp;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j > i)
            {
                temp = *(*(a + i) + j);
                *(*(a + i) + j) = *(*(a + j) + i);
                *(*(a + j) + i) = temp;
            }

        }
    }
}

void prt(int (*a)[100], int r, int c)
{
     printf("The elements of array are :\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
}



void main()
{
    int a[50][50], r, c, x;

    printf("Enter the rows and column :");
    scanf("%d %d", &r, &c);

    get_arr(a,r,c);
    tran(a,r,c);
    prt(a,r,c);
}