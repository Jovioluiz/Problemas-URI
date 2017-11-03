#include <stdio.h>
#include <math.h>

int main(){
  int linhas, i, j, k, x;

  scanf("%d", &linhas);

  for(x=1; x<=linhas; x++){

      i=pow(x,1);
      j=pow(x,2);
      k=pow(x,3);
      printf("%d %d %d\n", i, j, k);
      
      printf("%d %d %d\n", i, (j+1), (k+1));
    }

  }
