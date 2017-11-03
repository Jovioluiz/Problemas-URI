#include <stdio.h>

int main(){
  int i, pos=0, neg=0;
  float num, m, media=0;
for(i=0; i<6; i++){
  scanf("%f", &num);
  if(num>0){
    pos++;
    media=media+num;
    m=media/pos;
  }
  if(num<0){
    neg++;
  }
}
printf("%d valores positivos\n", pos);
printf("%.1f\n", m);
}
