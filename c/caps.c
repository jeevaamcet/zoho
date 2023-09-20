#include <stdio.h>
#include <string.h>

char cap(char s1[100])
{

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (i == 0)
        {
            s1[i] = s1[i] - 32;
        }
        if (s1[i] == ' ')
        {
            s1[i + 1] = s1[i + 1] - 32;
        }
    }
    return s1;
}

int main()
{

    char s1[50];
    char *p = s1;

    scanf("%[^\n]s", s1);
    printf("before capitalize : %s\n", s1);

    cap(p);

    printf("After capitalize : %s", s1);
}