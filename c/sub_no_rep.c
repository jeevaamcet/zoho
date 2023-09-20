#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int n, count = 0, i, j, max = 0, st, end, k;

    printf("Enter the string to check : ");
    fgets(str, sizeof str, stdin);

    n = strlen(str);

    i = 0;

    while (str[i] != '\0')
    {
        j = i + 1;

        while (j < n)
        {
            if (*(str + i) == *(str + j))
            {
                k = i + 1;

                while (*(str + i) != *(str + k))
                {
                    count++;
                    k++;
                }
                if (max < count)
                {
                    max = count;
                    st = i + 1;
                    end = k;
                    count = 0;
                }
                break;
            }
            j++;
        }
        i++;    
    }

    for (st; st <= end; st++)
    {
        printf("%c", *(str + st));
    }
}