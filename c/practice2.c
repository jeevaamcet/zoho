#include <stdio.h>
#include <string.h>

int main(){

    int i = 0,j;
    int n;
    int count = 0;
    char ch[50],a[50];

    scanf("%s%n",ch,&n);

    for(int i=0;i<n;i++){
        a[i] = ch[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ch[i]==a[j]){
                 a[j] ='\0';   
            }
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(a[i]==ch[j]){
                  count++;
                }
        }

        if(a[i]!='\0'){
            printf("The %c charector has %d times occured\n",a[i],count);
        }
        
        count = 0;

    }

}
