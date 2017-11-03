#include <stdio.h>

int main(){
  int linhas, i, j, num=1;

  scanf("%d", &linhas);

  for(i=0; i<linhas; i++){
    for(j=0; j<4; j++){
      if(num%4 ==0){
        printf("PUM\n");
      }
      else{
        printf("%d ", num);
      }
      num++;
    }

  }
}
