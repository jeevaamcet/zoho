int get_arr(int n, int a[max]){

    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    return a;
}
void print_mat(int n, int c[m][m]){

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++){
            printf( "%d  ", c[i][j]);
        }
        printf("\n");
    }
}
int get_mat(int n, int a[m][m]){

    printf("Enter the array elements : ");
    for ( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    return a;
}
void sort(char *a, int n)
{
    char temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((*(a + i)) < (*(a + j)))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
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
char dub(char *a, int len)
{
    for ( int i = 0; i < len; i++){
        for( int j = i+1; j < len; j++){
            if( a[i] == a[j]){
                for( int k = j; k < len; k++){
                    a[k] = a[k+1];
                }
                j--;
                len--;
            }
        }
    }
    return *a;
}
void prt(int *a, int n)
{
    printf("The resulted array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
}
void strCpy(char *s1, char *s2)
{
    int n = findLen(s2);
    for (int i = 0; i < n; i++)
    {
        s1[i] = s2[i];
    }
    s1[n] = '\0';
}