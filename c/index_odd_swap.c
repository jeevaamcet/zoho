#include<stdio.h>
#define max 50
int get_arr(int n, int a[max]){

    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    return a;
}
int prob(int n, int a[max]){

    int temp;
    int x;
    (n%2 == 0)? (x = n-1):(x = n-2);
    (n%2 == 0)? (n=n-1):(n = n);

    for ( int i = 1, j = x; i <= (n/2); i += 2, j -= 2){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }
}
int main(){

    int a[max];
    int n;

   
    printf("enter the range of numbers :");
    scanf("%d",&n);

    


    get_arr(n, a);

    prob(n, a);

    for ( int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }


}