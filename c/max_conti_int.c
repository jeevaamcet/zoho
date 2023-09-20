#include <stdio.h>

int sort(int *a, int n)
{
    int t;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    return *a;
}

int main()
{
    int a[10], b[50], n, count = 0, max = 0;
    static int k = 0;

    printf("enter the number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, n);

    for (int i = 0; i < n; i++)
    {
        if ((a[i] == a[i + 1] + 1))
        {
            b[k++] = a[i];
            count++;

            int j = i;

            while (a[j] == a[j + 1] + 1)
            {
                b[k++] = a[j + 1];
                j++;
                count++;
                i = j;
            }
            
            if (count > max)
            {
                max = count;
                
            }
            count = 0;

        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n%d", max);

    return 0;
}