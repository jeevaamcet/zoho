#include <stdio.h>

int main()
{

    int i = 0, dec = 0, bin, n = 1;

    printf("enter the binary to convert : ");
    scanf("%d", &bin);

    while (bin > 0)
    {

        dec += (bin % 10) * n;
        bin /= 10;
        n *= 2;
    }

    printf("%d", dec);
}