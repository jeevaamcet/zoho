#include <stdio.h>

int isNotRepeat(char *a, int i, int j)
{
    int st = i, end = j;

    for( st; st < end; st++)
    {
        for(int k = st+1; k <= end; k++)
        {
            if (a[st] == a[k])
            {
                return 0;
            }
        }
    }

    return 1;
}

void longSubString(char *s, int n)
{

    int index, end, max = 0, len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j  < n; j++)
        {
            if(isNotRepeat(s,i,j))
            {
                len = (j - i) + 1;
            }
            if(max < len)
            {
                max = len;
                index = i;
                end = j;
            }
        }
    }

    printf("%d\n", max);
    for ( index; index <= end; index++)
    {
        printf("%c", s[index]);
    }
    printf("\n");
}

void main()
{
    char s[50];
    int n;

    printf("Enter the string : ");
    scanf("%s%n", s, &n);

    longSubString(s,n);
}