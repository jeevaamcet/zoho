#include <stdio.h>

int lcm(int a, int b)
{
    for (int i = 1; i <= b; i++)
    {
        (((a * i) % b) == 0) ? ({return a*i; break; }) : (NULL);
    }
}

int main()
{
    int x, y;
    int min, max;

    printf("enter the two numbers to take input : ");
    scanf("%d %d", &x, &y);

    (x > y) ? ({min = y; max = x;}) : ({min = x; max = y;});

    int n = lcm(min, max);

    printf("the lcm of given %d %d is : %d",x, y, n);

    return 0;
}
