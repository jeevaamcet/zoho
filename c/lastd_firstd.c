#include <stdio.h>

int main(){

    int firstd, lastd, n;

    printf("enter the number to check : ");
    scanf("%d", &n);

    lastd = n%10;

    while( n >= 10) {
        
        n /= 10;

    }
    firstd = n;

    printf("%d",lastd);
    printf("\nfirst digit : %d",firstd);
    

}