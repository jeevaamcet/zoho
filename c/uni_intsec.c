#include <stdio.h>

int sort(int *a, int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return *a;
}

int dub(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for ( int j = i+1; j < n; j++)
        {
            if( a[i] == a[j])
            {
                for ( int k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
            
        }
    }
    return n;
}

int arr_un(int *u, int *a, int *b, int n1,int n2)
{
    int k = 0, n;

    for(int i = 0; i < n1; i++)
    {
        u[k++] = a[i];
    }
    for( int i = 0; i < n2; i++)
    {
        u[k++] = b[i];
    }

    n = dub(u,n1+n2);
    sort(u,n);

    return n;
}
int intersec(int *in, int *a,int *b, int n1, int n2)
{
    int k = 0;

    for (int i = 0; i < n2; i++)
    {
        for ( int j = 0; j < n1; j++)
        {
            if( b[i] == a[j])
            {
                in[k++] = b[i];
                break;
            }
        }
    }
    return k;
}

int main()
{
    int a[50], n1, n2, b[50], u[50], in[50];
    int n,n3;
    int *p = a;

    printf("enter the number of elements : ");
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the number of elements : ");
    scanf("%d", &n2);

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    n3 = intersec(in,a,b,n1,n2);

    n = arr_un(u,a,b,n1,n2);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", u[i]);
    }

    printf("\n");

    for (int i = 0; i < n3; i++)
    {
        printf("%d ", in[i]);
    }
}