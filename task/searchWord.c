#include <stdio.h>

void getArr(char *s)
{
    scanf("%[^\n]s", s);
}

int findLen(char *s)
{
    int n = 0;
    
    while(s[n] != '\0')
    {
        n++;
    }

    return n;
}

void searchWord(char *s1, char *s2)
{
    int k, i = 0, index,count = 0,j = 0,n2;

    n2 = findLen(s2);

    while(s1[i] != '\0')
    {
        j = 0;
        if(s2[j] == s1[i])
        {
            count = 0;
            k = i;
            index = i;

            while(j <= n2)
            {
                if (s1[k] == s2[j] || s1[k] == ' ')
                {
                    count++;
                    j++;
                    k++;
                }
                else
                {
                    j = 0;
                }
            }

            if ( count == n2 + 1)
            {
                printf("The given word is presented in %d th index \n", index);
            }
        }

        i++;
    }
}

void main()
{
    char mainStr[100],word[50];

    printf("Enter the main string : ");
    getArr(mainStr);

    printf("Enter the word to search : ");
    scanf("%s", word);

    searchWord(mainStr, word);
}