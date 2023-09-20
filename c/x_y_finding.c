
#include <stdio.h>
int main()
{
    int sum,difference;
    float x,y;

    printf("Enter the total and difference of two numbers :\n");
    scanf("%d %d",&sum,&difference);
    
    x=(sum+difference)/2.0;
    y=sum-x;

    printf("The two numbers are %f %f",x,y);
    
    return 0;
}