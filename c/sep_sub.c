#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], n, l, i = 0, c = 0;

    fgets(str,sizeof str, stdin);

    n = strlen(str);

    while( i < n)
    {
        l = i;
        while ( l < n)
        {
            for( int j = i; j < l; j++)
            {
                printf("%c ",str[j]);
                c++;
            }
            printf("|");

            l++;
        }

        i++;
        printf("\n");
    }
    printf("%d", c);
}