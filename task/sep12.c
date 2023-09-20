#include <stdio.h>

void  strLen(char *a, int *n)
{
    int i = 0;

    while ( *(a + i) != '\0' )
    {
        i++;
    }
    *n = i;
}

char fndMiddle(char *a, int n)
{
    char mid = *(a + n);

    return  mid;
}

void main()
{
    char str[50], mid;
    int n = 0;

    printf("Enter the string to get length ");
    scanf("%s", str);

    strLen(str, &n);

    mid = fndMiddle(str, n/2);

    printf("The middle char of given str is %c\n", mid);
}
