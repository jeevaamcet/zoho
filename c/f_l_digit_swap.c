#include <stdio.h>

int power(int p)
{

    int i = 1;
    int n = 10;

    while (i < p)
    {

        n *= 10;
        i++;
    }

    return n;
}

int main()
{

    int num, first_d, last_d, count = 0, dummy, swap, rem, i = 0;

    printf("enter the number to swap :");
    scanf("%d", &num);

    last_d = num % 10;
    dummy = num;

    while (dummy > 0)
    {
        first_d = dummy;
        dummy /= 10;
        count++;
    }

    last_d *= power(count - 1);

    while (i < count - 1)
    {
        if (i == 0)
        {
            swap = last_d;
            num = num / 10;
        }
        else
        {
            rem = num % 10;
            swap += rem * power(i);
            num /= 10;
        }
        i++;
    }
    swap += first_d;

    printf("\n%d", swap);
}
