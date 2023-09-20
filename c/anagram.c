#include <stdio.h>
#include <string.h>

void search(char *a, char *b )
{
    int count = 0, i = 0, j = 0,n;

    n = strlen(a);

    while (*(a + i) != '\0')
    {
        j = 0;
        while ( *(b  + j) != '\0')
        {
            if (*(a + i) == *(b + j))
            {
                i++;
                count++;
                break;
            }
            else if ( j == n-1)
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }
    if ( n == count)
    {
        printf("The entered string is anagram\n");
    }
    else
    {
        printf("The given strings are not anagram\n");
    }
}

void main()
{
    char a[50], b[50];

    printf("Enter the string 1 to check :");
    fgets(a,sizeof a, stdin);

    printf("Enter the string 2 to check :");
    fgets(b, sizeof b, stdin);

    search(a, b);
}