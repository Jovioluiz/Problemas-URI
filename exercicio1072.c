#include <stdio.h>

int main(){
  int i, n, x, contin=0, contout=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d", &x);
    if(10 <= x && x <= 20){
      contin++;
    }
    else{
      contout++;
    }
  }
  printf("%d in\n", contin);
  printf("%d out\n", contout);
}
