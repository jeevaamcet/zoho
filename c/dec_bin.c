#include <stdio.h>

int main(){

    int a[50], dec, siz, i = 0;

    printf("enter the dec to convert : ");
    scanf("%d",&dec);

    while(dec != 1){
        a[i] = dec%2;
        dec /= 2;
        i++;
    }

    a[i] = dec;
    siz = i;

    for ( int j = siz; j >= 0; j--){
        printf("%d",a[j]);
    }
}