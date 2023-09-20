#include <stdio.h>
#include <string.h>

char rev_str(char a[50]){

    int n, k = 0;
    char temp;

    n=strlen(a);

    for ( int i = 0; i <= n; i++){
        if( (a[i] == ' ')||(a[i] == '\0')){
            int j = i-1;
            for ( j, k; j >= k; j--, k++){
                temp = a[k];
                a[k] = a[j];
                a[j] = temp;
            }
            k = i+1;
        }
    }
    printf("\n%s",a);

}
int main(){

    char a[50];

    printf("enter the string to reverse : ");
    scanf("%[^\n]s",a);

    rev_str(a);

}
