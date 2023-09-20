#include <stdio.h>

enum jee {tru = 100, fals = 90};

int main(){

  enum jee i;
  enum jee j;

  i = tru;
  j = fals;

  printf("%d\n%d", j, i);
}
