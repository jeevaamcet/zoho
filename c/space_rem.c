#include <stdio.h>
#include <string.h>
#define m 100

char space_rem(char str1[m]){

    int len;

    len = strlen(str1);

    for( int i = 0; i < len; i++){
        if( str1[i] == ' '){
            // str1[i+1] += 32;
            for ( int j = i; j < len; j++){
                str1[j] = str1[j+1];
            }
        len--;
        }
    }
    printf("%s",str1);
}

int main(){

    char str1[m];

    printf("Enter the string to remove space : ");
    fgets(str1, sizeof str1, stdin);

    space_rem(str1);

    
}