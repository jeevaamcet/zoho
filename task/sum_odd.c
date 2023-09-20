#include <stdio.h>

int sum_even(int n){

    int sum = 0;
    
    for ( int i = 1; i <=n; i++){
        if( i%2 != 0){
            sum += i;

        }
    }
    printf("the sum of  odd  number is : %d\n", sum);
}

int main(){
    int n;

    printf("enter the range of numbers to sum : ");
    scanf("%d",&n);

    sum_even(n);
}