#include<stdio.h>

 int prime(int n){

    int count = 0;

    for(int i = n-1; i>1; i--){
        
        if( n%i == 0 ){
            count++;
            break;

        }
    }

     return count;

}

int main(){

    int n;
    

    printf("Enter the number to find prime number or not :\n");
    scanf("%d",&n);

    int count = prime(n);

    printf("%d",count);
    

    (count == 0)? (printf("the number is prime number")): (printf("the number is  not prime number"));

}