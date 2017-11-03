#include <stdio.h>

int main(){
  int x, soma=0, i, j;

  do {
    scanf("%d", &x);
    if(x==0){
      break;
    }
    if(x%2==0){
      soma=0;
      for(i=1; i<=5; i++){
        soma+=x;
        x+=2;
      }
      printf("%d\n", soma);
    }
    else{
      x++;
      soma=0;
      for(j=1; j<=5; j++){
        soma+=x;
        x+=2;
      }
      printf("%d\n", soma);
    }
  } while(x!=0);
}
