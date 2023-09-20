#include <stdio.h>
#include <string.h>


int main()
{
    char a[50], b[50];
    int n, count = 0;

    printf("enter the strings to compare : ");
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);

    n = strlen(a);

    if(strlen(a) == strlen(b))
    {
        for (int i = 0; i < n; i++)
        {
            (a[i] == b[i]) ? (count++) : (i = n);
        }
        (count == n) ? ( printf("the two strings are equal")) : (printf("the two strings are not equal"));
    }
    else 
    {
        printf("the two strings are not equal!!!");
    }

    

    return 0;
}