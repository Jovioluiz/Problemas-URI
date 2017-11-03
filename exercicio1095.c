#include <stdio.h>

int main(){
  int I, J=60;
  for(I=1; I<40; I+=3){
    printf("I=%d J=%d\n", I, J);
    J=J-5;
  }
}
