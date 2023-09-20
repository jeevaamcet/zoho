#include <stdio.h>

struct student
{
    char name[50];
    int age;
    int mark;
}s[];

void getDetail(struct student *s, int n)
{
    char temp[50];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d ", i + 1);
        scanf("%s", temp);
        strcpy(s[i].name,temp);
        temp[0] = '\0';
        printf("Enter the age of student %d ", i + 1);
        scanf("%d",&s[i].age);
        printf("Enter the mark of student %d ", i + 1);
        scanf("%d",&s[i].mark);
    }
}

void prtDetail(struct student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The name of student %d : %s \n", i + 1, s[i].name);
        printf("The age of student %d : %d \n", i + 1,s[i].age);
        printf("The mark of student %d : %d \n", i + 1,s[i].mark);
        printf("\n");
    }
}

void main()
{
    int n;

    printf("Enter the number of students in class : ");
    scanf("%d", &n);

    struct student s[n];

    getDetail(s,n);

    prtDetail(s,n);

}