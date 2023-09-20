#include <stdio.h>
int count_(int n)
{

    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("%d", count);
}

int main()
{

    int n;

    printf("Enter the number to count digit : ");
    scanf("%d", &n);

    count_(n);
}