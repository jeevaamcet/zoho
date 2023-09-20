#include <stdio.h>

void sub_check(int *b, int *a, int n1, int n2)
{
    int count = 0, i = 0, j = 0;

    while (j < n1 && i < n2)
    {
        if (*(a + i) == *(b + j))
        {
            count++;
            i++;
            j++;
            if (count == n2)
            {
                printf("The given sub array is presented in main array :");
                break;
            }
        }
        else
        {
            j++;
        }
    }
    if (count != n2)
    {
        printf("The given sub array not in main array ");
    }
}

void sort(int *a, int n)
{
    int temp, i = 0, j = 0;

    while (i < n)
    {
        j = i;
        while (j < n)
        {
            if (*(a + i) < *(a + j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
            j++;
        }
        i++;
    }
}

void get_arr(int *a, int *n)
{
    printf("Enter the number of elements in array :");
    scanf("%d", n);

    printf("Enter the elements of array");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", a + i);
    }
}

void main()
{
    int m[50], sub[50], n1, n2;

    get_arr(m, &n1);
    get_arr(sub, &n2);

    sort(m, n1);
    sort(sub, n2);

    sub_check(m, sub, n1, n2);
}