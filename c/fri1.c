#include <stdio.h>

int fib(int n)
{
    if( n == 0)
    {
        return 0;
    }
    else if( n <= 2)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }

}

int main()
{
    int n, i = 0, fi = 21, s = 13;

    printf("enter the number to print series : ");
    scanf("%d", &n);

    // printf("%d,\t", f);

    // printf("%d,\t", s);

    // while (i < n)
    // {

    //     fib = f - s;
    //     printf("%d,\t", fib);
    //     f = s;
    //     s = fib;
    //     i++;
    // }
    i = fib(n);
    printf("%d", i);
    

}
    

