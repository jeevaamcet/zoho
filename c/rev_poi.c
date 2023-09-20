#include <stdio.h>
#include <string.h>
#define m 50

int main()
{
    char a[m], b[m];
    char *p, *r;
    int i;

    printf("enter the string to reverse  : ");
    fgets(a, sizeof a, stdin);

    i = strlen(a);
    
    p = a;
    r = b;

    // while(*p)
    // {
    //     p++;
    //     i++;
    // }    

    while(i >= 0)
    {
        // p--;
        *r = *(p+i-1);
        r++;
        i--;
    }
    *r = '\0';
    r = b;
    printf("%s",b);

}