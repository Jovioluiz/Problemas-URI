#include <stdio.h>

int main(){
  int linha, coluna, i;

  scanf("%d %d", &coluna, &linha);

  for(i=1; i<linha; i++){
    if(i%coluna==0){
      printf("%d\n", i);
    }
    else{
      printf("%d ", i);
    }
  }
      printf("%d\n", linha);
    }
