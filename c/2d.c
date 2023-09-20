#include <stdio.h>
#define m 100
int get_arr(int n, int (*arr)[m] )
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", *(arr + i)+j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main()
{

    int n;

    scanf("%d", &n);

    int arr1[m][m];


    get_arr(n, arr1);
}