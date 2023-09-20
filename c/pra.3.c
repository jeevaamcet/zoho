#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

void reverse(char *a)
{
   int i, j, size;
   char tmp;

  size = strlen(a);
  j=size-1;

  for(i=0; i<size/2; i++)
  {
      tmp=a[i];
      a[i]=a[j];
      a[j]=tmp;
      j--;
  }

}


void reverseAll(char *a, char *new)
{
   int size;

   reverse(a);

   size = strlen(a);
//    char *new = (char*)malloc(size+1);

  char *token = strtok(a, " ");
  reverse(token);
  
  strcpy(new, token);
//   printf("%s ", new);
  while(token != NULL)
  {
    printf("%s", token);
      reverse(token);
      token = strtok(NULL, " ");
      strcat(new, token);
  }

}

int main()
{
   char a[15]= "have a nice day";
   char new[60];

    reverseAll(a, new);
    printf("%s ", new);
    return 0;
}
