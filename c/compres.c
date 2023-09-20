#include <stdio.h>
#include <string.h>

char compress(char a[50], char b[50]){
    
    int k = 0;
    int count = 49;
    int len = strlen(a);

    for ( int i = 0; i < len-1; i++){
        for ( int j = i+1; j < len; j++){

            b[k] = a[i];

            if (a[i] == a[j]){

                count++;
            }
            else{
                i = j-1;
                k++;
                break;
                
            }
        }
        b[k] = count;
        k++;
        count = 49;
    }
 }

int main(){

    char a[50], b[50];

    printf("enter the str : ");
    fgets(a,sizeof a, stdin);

    compress(a,b);

    printf("%s\n",a);
    printf("%s\n",b);

}