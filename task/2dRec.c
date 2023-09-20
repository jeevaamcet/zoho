#include <stdio.h>

void prtRec(int (*a)[50], int r1, int r2, int c1, int c2)
{
    for( int i = r1; i <= r2; i++)
    {
        for (int j = c1; j <= c2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void getArr(int (*a)[50], int r, int c)
{
    for( int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void sumArr(int (*a)[50], int r1, int r2, int c1, int c2)
{
    int sum  = 0;
    for( int i = r1; i <= r2; i++)
    {
        for (int j = c1; j <= c2; j++)
        {
            sum += a[i][j];
        }
    }

    printf("The sum of rectangle is : %d ", sum);
}

void main()
{
    int r, c, r1, r2, c1, c2, arr[50][50];

    printf("Enter the number of rows and column : ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of array : ");
    getArr(arr,r,c);

    printf("Enter the start row and column to print the rectangle : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the end row and column to print the rectangle : ");
    scanf("%d %d", &r2, &c2);

    printf("The resulted rec is : \n");
    prtRec(arr,r1, r2, c1, c2);

    sumArr(arr,r1, r2, c1, c2);

    printf("\n");

}