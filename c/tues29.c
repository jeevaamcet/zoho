// #include <stdio.h>
// #include <stdlib.h>

// int main(){

// struct node
// {
//     int a;
//     struct node* next;
// };

// struct node* head = (struct node *) malloc(sizeof(struct node));
// head -> a = 5;
// head -> next = NULL;

// struct node* current = (struct node *) malloc(sizeof(struct node));
// current -> a = 10;
// current -> next = NULL;
// head -> next = current;

// current = (struct node *) malloc(sizeof(struct node));
// current -> a = 20;
// current -> next = NULL;
// head -> next -> next = current;

// struct node *t = head;

// while (t != NULL){

//     printf("%d\n",t -> a);
//     t = t -> next;
// }


// }
// ####################################################################################################################

// #include <stdio.h>
// #define max 100

// int get_mat(int n, int a[max][max]){

//     printf("Enter the array elements : ");
//     for ( int i = 0; i < n; i++){
//         for( int j = 0; j < n; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     return a;
// }

// int add_mat(int n, int a[max][max], int b[max][max], int c[max][max]){

//      for ( int i = 0; i < n; i++){
//         for ( int j = 0; j < n; j++){
//             c[i][j] = a[i][j] + b[i][j];
//         }
//    }
//    return c;
// }
// void print_mat(int n, int c[max][max]){

//     for ( int i = 0; i < n; i++){
//         for ( int j = 0; j < n; j++){
//             printf( "%d  ", c[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){

//     int a1[max][max], a2[max][max], a3[max][max];
//     int n;

//     printf("Enter the array size : ");
//     scanf("%d",&n);

//     get_mat(n, a1);

//     get_mat(n, a2);

//     add_mat(n, a1, a2, a3);

//     print_mat(n, a1);
//     print_mat(n, a2);

//     printf("The added matrix is : \n");
//     print_mat(n, a3);

// }
// ############################################################################################

// #include <stdio.h>
// #define m 100

// int get_mat(int n, int a[m][m]){

//     printf("Enter the array elements : ");
//     for ( int i = 0; i < n; i++){
//         for( int j = 0; j < n; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     return a;
// }

// int mul_mat(int n, int a[m][m], int b[m][m], int c[m][m]){

//     int k;

//     for ( int i = 0; i < n; i++){
//         for ( int j = 0; j < n; j++){

//             k = 0;

//             while ( k < n){
//                 c[i][j] += a[i][k] * b[k][j];
//                 k++;
//             }
//         }
//     }
//     return c;
// }

// void print_mat(int n, int c[m][m]){

//     for ( int i = 0; i < n; i++){
//         for ( int j = 0; j < n; j++){
//             printf( "%d  ", c[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){

//     int a1[m][m], a2[m][m], a3[m][m];
//     int n;

//     printf("Enter the number of rows and columns : ");
//     scanf("%d",&n);

//     get_mat(n,a1);
//     get_mat(n,a2);

//     mul_mat(n, a1, a2, a3);

//     print_mat(n, a3);
// }
// #############################################################################################

// 
// #include <stdio.h>
// int main(){

//     int num, n, dum_n, rem, count = 0;

//     printf("Enter the number :");
//     scanf("%d", &num);

//     printf("Enter the digit to check :");
//     scanf("%d", &n);

//     dum_n = num;

//     while ( dum_n != 0){
        
//         rem = dum_n%10;
//         if( rem == n){
//             count++;
//         }
//         dum_n /= 10;
//     }
//     printf("%d",count);

// }

// #include <stdio.h>
// #include <string.h>
// int main(){

//     char a[50];
//     int n, k = 0;
//     char temp;
    

//     printf("enter the string to reverse : ");
//     scanf("%[^\n]s",a);

//     n=strlen(a);
//     printf("%d",n);

//     for ( int i = 0; i <= n; i++){
//         if( (a[i] == ' ')||(a[i] == '\0')){
//             int j = i-1;
//             for ( j, k; j >= k; j--, k++){
//                 temp = a[k];
//                 a[k] = a[j];
//                 a[j] = temp;
//             }
//             k = i+1;
//         }
//     }
//     printf("\n%s",a);
// }
// #include <stdio.h>
// #include <string.h>

// int main(){

//     char a[50];
//     int len;

//     printf("Enter the string : ");
//     scanf("%s%n", a, &len);

//     for ( int i = 0; i < len; i++){
//         for( int j = i+1; j < len; j++){
//             if( a[i] == a[j]){
//                 for( int k = j; k < len; k++){
//                     a[k] = a[k+1];
//                 }
//                 j--;
//                 len--;
//             }
//         }
//     }
//     printf("%s",a);
// }
