#include <stdio.h>

int main(){

  int x, i;
  scanf("%d", &x);

  for(i=1; i<=x; ){
    printf("%d\n", i);
    i+=2;
  }
}
