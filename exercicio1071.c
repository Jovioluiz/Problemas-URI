#include <stdio.h>

int main(){

  int x, y, i, j, soma=0;
  scanf("%d %d", &x, &y);

  if(x>y){
    for(i=x-1; i>y; i--){
      if(i%2 !=0){
      soma=soma+i;
      }
    }
  }
    else {
      for(j=y-1; j>x; j--){
        if(j%2 !=0){
          soma=soma+j;
        }
      }
    }
    printf("%d\n", soma);
}
