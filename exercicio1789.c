#include <stdio.h>
int main(){
  int num, i, lesma[100], cont1=0, cont2=0, cont=0;

  while (scanf("%d", &num) !=EOF) {
    for(i=1; i<num; i++){
      scanf("%d", &lesma[i]);
  if (lesma[i] < 10) {
    cont++;
  }
  else if(lesma[i] >= 10 && lesma[i] < 20){
    cont1++;
  }
  else if(lesma[i] > 20){
    cont2++;
  }
  if (cont2 != 0) {
    printf("3\n");
  }
  else if(cont1 != 0){
    printf("2\n");
  }
  else{
    printf("1\n");
  }
  cont = 0;
  cont1 = 0;
  cont2 = 0;

  scanf("%d", &num);
  }
} 
}
