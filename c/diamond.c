#include <stdio.h>
char dia_(int n){
    int l, t, x;
    l = n-1;
    t = 1, x=1;

    for ( int i = 0; i < n; i++){
        for (int j = 0; j < l; j++){
            
            printf(" ");
            
            }
        for( int k = 0; k < t; k++){
            
            printf("*");
            
            }
        if ( i < n/2){
            l -= 1;
            t += 2;
            // x = t;
        }
        else{
            l += 1;
            t -= 2;
        }
        
        

        printf("\n");
    }    

}

int main(){

    int n;

    printf("Enter the number of rows to  print :");
    scanf("%d", &n);

    dia_(n);
}