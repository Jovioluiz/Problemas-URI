#include <stdio.h>

int main(){
  int x, y, i;

  scanf("%d %d", &x, &y);
if(x<y){
  for(i=x; i<y; i++){
    if(i !=x && i%5==2 || i%5==3){
      printf("%d\n", i);
    }
  }
}
else if(x>y){
  for(i=y; i<x; i++){
    if(i!=y && i%5==2 || i%5==3){
      printf("%d\n", i);
    }
  }
}
}
