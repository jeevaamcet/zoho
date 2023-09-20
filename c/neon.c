#include <stdio.h>

int neon(int n){

    int sum = 0, dummy;

    dummy = n*n;

    while( dummy > 0 ){

        sum += dummy%10;
        dummy /= 10;
    }
    if( sum == n){
        printf("the given number is neon");
    }
    else {
        printf("the number is not neon");
    }
}

int main(){

    int n;

    printf("enter the number to ckeck : ");
    scanf("%d", &n);

    neon(n);
}