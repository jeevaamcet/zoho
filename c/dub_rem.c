#include <stdio.h>
#include <string.h>

char dub(char *a, int len)
{
    for ( int i = 0; i < len; i++){
        for( int j = i+1; j < len; j++){
            if( a[i] == a[j]){
                for( int k = j; k < len; k++){
                    a[k] = a[k+1];
                }
                j--;
                len--;
            }
        }
    }
    return *a;
}

int main(){

    char a[50];
    int len;

    printf("Enter the string : ");
    scanf("%s%n", a, &len);

    char *p = a;

    dub(a,len);
    
    printf("%s",a);
}