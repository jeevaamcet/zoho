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

void find_arr(int (*a)[100], int r, int c, int x)
{
    int i = 0, flag = 1;
    while (i < r)
    {
        int j = 0;
        while (j < c)
        {
            if (*(*(a + i) + j) == x)
            {
                flag = 0;
                printf("The given %d is at position of %d,%d\n", x, i, j);
            }
            j++;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("There is no such number in the given array :");
    }
}

void main()
{
    int a[50][50], r, c, x;

    printf("Enter the rows and column :");
    scanf("%d %d", &r, &c);

    get_arr(a, r, c);

    printf("Enter the number to search in array :");
    scanf("%d", &x);

    find_arr(a, r, c, x);
}