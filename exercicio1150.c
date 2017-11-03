#include <stdio.h>

int main(){

  int x, z, i, j, cont=0;

  scanf("%d", &x);

  do{
  scanf("%d", &z);
}
  while(x>=z);
    for(i=x, j=0; j<z; i++){
      j=j+i;
      cont++;
    }
  printf("%d\n", cont);
  }
