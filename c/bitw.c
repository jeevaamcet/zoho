#include<stdio.h>

int main(){

    int arr[50];
    int a, b ,n;

    scanf("%d %d",&a,&b);

    for (int i=a,j=0;i<=b;i++,j++){
        arr[j] = i;
        // printf("%d\n",i);
        // printf("%d\n",j);
        printf("%d\n",arr[j]);
        n = j;
    }
    
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            printf("the and result of %d and %d is %d\n", arr[i], arr[j], arr[i]&arr[j]);
            printf("the or result of %d and %d is %d\n", arr[i], arr[j], arr[i]|arr[j]);
            printf("the xor result of %d and %d is %d\n", arr[i], arr[j], arr[i]^arr[j]);
            printf("*\n");
        } 
    }
}