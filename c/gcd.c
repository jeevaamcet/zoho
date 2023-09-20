#include <stdio.h>
int gcd(int x,int y)
{
    int i = (x > y) ? (y):(x);

    do
    {
        (x % i == 0) ? (y % i == 0) ? ({return i;}):(NULL) :(NULL);
        i--;
    }while(i);
    
}
int main()
{
    int a, b;

    printf("enter the two numbers :");
    scanf("%d %d", &a, &b);

    printf("the gcd of two numbers is : %d",gcd(a, b));
}