#include <stdio.h>
#include <stdlib.h>

int main(){

struct node
{
    int a;
    struct node* next;
};

struct node* head = (struct node *) malloc(sizeof(struct node));
head -> a = 5;
head -> next = NULL;

struct node* current = (struct node *) malloc(sizeof(struct node));
current -> a = 10;
current -> next = NULL;
head -> next = current;

current = (struct node *) malloc(sizeof(struct node));
current -> a = 20;
current -> next = NULL;
head -> next -> next = current;

struct node *t = head;

while (t != NULL){

    printf("%d\n",t -> a);
    t = t -> next;
}


}

