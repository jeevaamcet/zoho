#include<stdio.h>

int main(){
    int arr[5],temp;
    int i,j;

    for(i=0;i<5;i++){
        printf("%d",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Before the sort ");
    
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }

    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("\nAfter the sort ");

    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }

    return 0;
}