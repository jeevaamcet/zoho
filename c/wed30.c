#include <stdio.h>

int note(int n)
{

    int dum, i = 0;
    int note[] = {500, 100, 50, 20, 10, 5, 2, 1};

    dum = n;

    while (dum)
    {
        printf("the %d note in amount is : %d\n", note[i], dum / note[i]);
        dum %= note[i];
        i++;
    }
}

int main()
{
    int amount;

    printf("Enter the amount : ");
    scanf("%d", &amount);

    note(amount);
}