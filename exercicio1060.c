#include <stdio.h>

int main(){
  int i, pos=0, neg=0;
  float num;
for(i=0; i<6; i++){
  scanf("%f", &num);
  if(num>0){
    pos++;
  }
  if(num<0){
    neg++;
  }
}
printf("%d valores positivos\n", pos);
}
