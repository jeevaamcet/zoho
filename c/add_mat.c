#include <stdio.h>
#define max 100

int get_mat(int n, int a[max][max]){

    printf("Enter the array elements : ");
    for ( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    return a;

}
int add_mat(int n, int a[max][max], int b[max][max], int c[max][max]){

     for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
   }
   return c;
}
void print_mat(int n, int c[max][max]){

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            printf( "%d  ", c[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int a1[max][max], a2[max][max], a3[max][max];
    int n;

    printf("Enter the array size : ");
    scanf("%d",&n);

    get_mat(n, a1);

    get_mat(n, a2);

    add_mat(n, a1, a2, a3);

    print_mat(n, a1);
    print_mat(n, a2);

    printf("The added matrix is : \n");
    print_mat(n, a3);

}