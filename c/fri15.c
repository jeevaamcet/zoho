#include <stdio.h>
#include <string.h>

struct contact
{
    char name[50];
    char num[10];
}c[];

void addContact(struct contact *c, int i)
{
    printf("Enter the name of contact : ");
    scanf("%s",c[i].name);

    printf("Enter the contact number : ");
    scanf("%s", c[i].num);
}

void disContact (struct contact *c, int i)
{
    printf("The name of contact : %s \n",c[i].name);
    printf("The contact number : %s \n",c[i].num);
}

int comparestr(char *a1, char *a2)
{
    if (strlen(a1) != strlen(a2))
    {
        return 0;
    }

    int n = strlen(a2);

    for (int i = 0; i < n; i++)
    {
        if (a1[i] != a2[i])
        {
            return 0;
        }
    }

    return 1;
}

void searCont (struct contact *c, int n)
{
    char temp[50];

    for (int i = 0; i < n; i++)
    {
        if(comparestr(c[i].name,temp))
        {
            disContact(c,i);
            break;
        }
    }
}

void main()
{
    struct contact c[3];

    addContact(c,0);
    addContact(c,1);
    addContact(c,2);
}
