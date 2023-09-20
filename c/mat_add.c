#include <stdio.h>

void get_arr(int (*a)[50], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }
}

void prt(int (*a)[50], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

}

void mat_add(int (*a)[50], int (*b)[50], int (*d)[50], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(*(d + i) + j) = (*(*(a + i) + j) )+ (*(*(b + i) + j));
        }
    }
}

void main()
{
    int a1[50][50], a2[50][50], add[50][50], r, c;

    printf("Enter the number of rows and column :\n");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of 1st array :\n");
    get_arr(a1, r, c);
    
    printf("Enter the elements of 2nd array :\n");
    get_arr(a2, r, c);

    printf("The elements of 1nd array are :\n");
    prt(a1, r, c);


    printf("The elements of 2nd array  are :\n");
    prt(a2, r, c);

    mat_add(a1, a2, add, r, c);

    printf("The final resulted Array is \n");
    prt(add, r, c);
}