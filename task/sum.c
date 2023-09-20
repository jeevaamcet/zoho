#include <stdio.h>

void fib(int *a, int n)
{
    int k;
     a[0] = 0,a[1] = 1;

    for (int i = 2; a[i - 1] <= n; i++)
    {
            a[i] = a[i - 2] + a[i - 1];
            k = i;
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sum_no(int *a, int num)
{
    
    int i = 0;
    while(num > 0)
    {
        if (a[i] > num)
        {
            printf("%d + ", a[i-1]);
            num -= a[i-1];
            i = 0;
        }
        i++;
    }
    printf("\n");
}
void main()
{
    int num, a[100];

    printf("Enter the number  to check :");
    scanf("%d", &num);

    fib(a, num);

    sum_no(a, num);
}