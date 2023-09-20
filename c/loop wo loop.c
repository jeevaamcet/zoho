#include<stdio.h>

void loop(int i, int t, char a[]){
    
        printf("%s\n",a);
        
    if(i < t){
        i++;
        loop(i,t,a);
    }

}

int main(){
    
    char a[50];
    int n, t;
    int i = 1;

    scanf("%s",a);
    printf("Enter the number of times loop :");
    scanf("%d",&t);

    loop(i, t, a);
}