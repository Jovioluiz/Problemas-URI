#include <stdio.h>

int main(){
  int x, i;

  scanf("%d", &x);
  if(x%2==0){
    for(i=2; i<=x; i+=2){
      printf("%d^2 = %d\n", i, (i*i));
    }
  }
  if(x%2 !=0){
    x-=1;
    for(i=2; i<=x; i+=2){
      printf("%d^2 = %d\n", i, (i*i));
    }
  }
}
