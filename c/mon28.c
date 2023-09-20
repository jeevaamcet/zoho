#include <stdio.h>
#include <string.h>
#define max 50

char* com(char arr1[max], char arr2[max], char arr3[max]){

    int i = 0, j = 0;
    int len = strlen(arr1);

    if(strlen(arr1) == strlen(arr2)){
        for ( i = 0; arr1[i] != '\0'; i++){

            if( arr1[i] == arr2[i]){
                // printf("%c",arr1[i]);

                while(1){
                    arr3[j] = arr1[i];
                    j++;
                    break;
                }
            
                
            }
        }
    }
    else{
        printf("there is not a same length of strings");
    }
    return arr3;
}
int main(){

    char a1[max], a2[max], a3[max];
    char *p1, *p2, *p3;

    p1 = a1;
    p2 = a2;
    p3 = a3;


    fgets(a1, sizeof a1, stdin);
    fgets(a2, sizeof a2, stdin);

    com(p1, p2, p3);

    printf("\n%s",a3);
    
}

enum jee {tru = 100, fals = 90};

int main(){

  enum jee i;
  enum jee j;

  i = tru;
  j = fals;

  printf("%d\n%d", j, i);
}
2
char cap(char s1[100]){

    for ( int i = 0; s1[i] != '\0'; i++){
        if( i == 0){
            s1[i] = s1[i] - 32;
        }
        if( s1[i] == ' '){
            s1[i+1] = s1[i+1] - 32;

        }
    }
    return s1;
}

int main(){

    char s1[50];
    char *p = s1;


    scanf("%[^\n]s",s1);
    printf("before capitalize : %s\n", s1);

    cap(p);

    printf("After capitalize : %s", s1);
}
3
int *get_arr(int n, int a[max]){

    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    return a;
}
int prob(int n, int a[max]){

    int temp;
    int x;
    (n%2 == 0)? (x = n-1):(x = n-2);
    (n%2 == 0)? (n=n-1):(n = n);

    for ( int i = 1, j = x; i <= (n/2); i += 2, j -= 2){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }
}
int main(){

    int a[max];
    int n;

   
    printf("enter the range of numbers :");
    scanf("%d",&n);

    


    get_arr(n, a);

    prob(n, a);

    for ( int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
4
