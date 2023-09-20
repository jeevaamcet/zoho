#include<stdio.h>
// int n=3;

int get_(int n,int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
        
    }
}
void main(){

    int arr[50][50];
    int i=0;
    int n;

    scanf("%d",&n);

    get_(n,arr);
    

}