#include <stdio.h>
#define m 100

int get_mat(int n, int a[m][m]){

    printf("Enter the array elements : ");
    for ( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    return a;
}

void mul_mat(int n, int a[m][m], int b[m][m], int c[m][m]){

    int k;

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){

            k = 0;

            while ( k < n){
                c[i][j] += a[i][k] * b[k][j];
                k++;
            }
        }
    }
}

void print_mat(int n, int c[m][m]){

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            printf( "%d  ", c[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int a1[m][m], a2[m][m];
    static int a3[m][m];
    int n;

    printf("Enter the number of rows and columns : ");
    scanf("%d",&n);

    get_mat(n,a1);
    get_mat(n,a2);

    mul_mat(n, a1, a2, a3);

    print_mat(n, a3);
}