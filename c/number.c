#include<stdio.h>
int main(){
    int a,b,min,max;
    char word[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    scanf("%d %d",&a,&b);

    if(a<b){
        min=a;
        max=b;
    }
    else{
        max=a;
        min=b;
    }

    for(min;min<=max;min++){
        if(min<=9){
            printf("%s\n",word[min]);
        }
        else if(min%2==0){
            printf("The %d is even\n",min);
        }
        else {
            printf("The %d is odd number\n",min);
        }
    }
    
}