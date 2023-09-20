#include <stdio.h>

struct student
{
    char stdName[50];
    int id;

};

struct clg
{
    char name[50];
    int rank;
    struct student std[50];

};



void main()
{

    char name[50];
    char id[40];
    struct clg clg[50]; 

    clg[0].rank = 40;
    clg[0].std[1].id = 10;

    printf("%d",clg[0].rank);
    printf(" %d",clg[0].std[1].id);

    printf("\nEnter the name : ");
    scanf("%[^\n]s", name);
    
    printf("Enter the id of student : ");
    scanf("%s", id);

    printf("%s",id);
}