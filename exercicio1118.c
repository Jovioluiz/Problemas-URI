#include <stdio.h>
int main(){
  int i, x;
  float nota, media, soma;

  while (x!=2) {
    soma=0;
    i=1;
    while (i<=2) {
      scanf("%f", &nota);
      if (nota>=0 && nota<=10) {
        soma+=nota;
        i++;
      }
      else
      printf("nota invalida\n");
    }
    media=soma/2;
    printf("media = %.2f\n", media);

    do {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &x);
    } while(x<1 || x>2);
  }
}
