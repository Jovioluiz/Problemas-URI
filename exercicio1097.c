#include <stdio.h>

int main(){
  int I, J, K, l;
  for(I=1, J=7; I<=9; I+=2, J+=2){
    for(l=I, K=J; K>=(J-2); K--){
      printf("I=%d J=%d\n", I, K);
    }
  }
}
