#include <stdio.h>
int main(){

    int num, n, dum_n, rem, count = 0;

    printf("Enter the number :");
    scanf("%d", &num);

    printf("Enter the digit to check :");
    scanf("%d", &n);

    dum_n = num;

    while ( dum_n != 0){
        
        rem = dum_n%10;
        if( rem == n){
            count++;
        }
        dum_n /= 10;
    }
    printf("%d",count);

}