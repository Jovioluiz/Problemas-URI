#include <stdio.h>

int main(){
  int x, i;

  scanf("%d", &x);
  if(x%2 !=0){
    for(i=1; i<=6; i++){
    printf("%d\n", x);
    x+=2;
    }
  }
  if(x%2==0){
    x+=1;
    for(i=1; i<=6; i++ ){
      printf("%d\n", x);
      x+=2;
    }
  }
}
