#include <stdio.h>

int main(){
  int x, y, i, aux, soma=0;

  scanf("%d %d", &x, &y);
  if(x>y){
    aux = x;
    x = y;
    y = aux;
  }
  for(i=x; i<=y; i++){
    if(i%13 !=0){
      soma+=i;
    }
  }
  printf("%d\n", soma);
}
