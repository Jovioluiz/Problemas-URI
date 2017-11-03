#include <stdio.h>

int main(){
  int I, J, K, l;
  for(I=0, J=1; I<=2; I+=0.2, J+=0.2){
    for(l=I, K=J; K<=(J+2); K++){
      printf("I=%d J=%d\n", I, K);
    }
  }
}
