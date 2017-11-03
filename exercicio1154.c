#include <stdio.h>

int main(){
  int n, cont=0;
  double media=0;

while(scanf("%d", &n) !=EOF && n>0){
    media = media+n;
    cont++;
}

  printf("%.2lf\n", (media/cont));
}
