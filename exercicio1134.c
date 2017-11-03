#include <stdio.h>

int main(){
  int opcao, alcool=0, gasolina=0, diesel=0;


  do {
    scanf("%d", &opcao);
    if (opcao==1) {
      alcool++;
    }
    else if (opcao==2) {
      gasolina++;
    }
    else if (opcao==3) {
      diesel++;
    }
  }while(opcao!=4);

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);

  return 0;
}
