#include <stdio.h>
#include <string.h>

void rev(char *a, int j, int i)
{
    char c;

    int n = (i-j)/2;
    int k = 0;

    while(k <= n)
    {
        c = a[i];
        a[i] = a[j];
        a[j] = c;
        j++;
        k++;
        i--;
    }
    // printf("%s",a);

}

void revWord (char *a)
{
    char s[50][50];
    int j = 0, i = 0;

    while (*(a + i) != '\0')
    {
        if( (*(a + j) == ' ') || (*(a + j) == '\0'))
        {
            rev(a, i, j-1);
            i = j + 1;
            j = i + 1;
        }
        else
        {
            j++;
        }
    }
}

void main()
{
    char s[50];

    scanf("%[^\n]s",s);

    int n = strlen(s);
    rev(s, 0, n-1);
    printf("%s\n",s);
    revWord(s);

    printf("%s",s);

}