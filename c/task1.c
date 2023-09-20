#include <stdio.h>

int  addition(int x,int y){
    
    int sum=x+y;

    return sum;
}

int sub(int x,int y){
    
    int difference=x-y;

    return difference;
}

int multi(int x,int y){

    int multiply=x*y;

    return multiply;
}
int div(int x,int y){

    int divide=x/y;

    return divide;
}


int main(){

    int x,y;

    printf("Enter the two numbers :");
    scanf("%d %d",&x,&y);

    printf("The addition of number %d %d is : %d\n",x,y,addition(x,y));

    printf("The difference  of number %d %d is : %d\n",x,y,sub(x,y));

    printf("The multiplication of number %d %d is : %d\n",x,y,multi(x,y));

    printf("The divide of number %d %d is : %d\n",x,y,div(x,y));

}