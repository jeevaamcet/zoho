#include <stdio.h>
#include <string.h>

int isoMarphic (char *s1, char *s2, int *res )
{
    char t1,t2;
    int n;
    int a[50];

    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }

    n = strlen(s1);

    for (int i = 0; i < n; i++)
    {
        t1 = s1[i];
        t2 = s2[i];
        int j = i;
        while (j < n)
        {
            if((s2[j] == t2 && a[j] == 0))
            {
                s2[j] = t1;
                a[j] = 1;
            }
            j++;
           
        }
    }
    return strcmp(s1,s2);
}

void main()
{
    char s1[50], s2[50], s3[50], s4[50];
    int res;

    printf("Enter the string 1 to check ");
    fgets(s1, sizeof s1, stdin);

    strcpy(s3,s1);

    printf("Enter the string 2 to check ");
    fgets(s2, sizeof s2, stdin);

    strcpy(s4,s2);

    isoMarphic(s1,s2,&res);
    isoMarphic(s4,s3,&res);

    printf("\n%d\n", res);

    if (res)
    {
        printf("False");
    }
    else
    {
        printf("true");
    }
}