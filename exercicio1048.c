#include <stdio.h>

int main(){

float salario, novo_salario, reajuste;
char per='%';
scanf("%f", &salario);

if (salario <=400.00) {
  novo_salario=(salario*0.15)+salario;
  reajuste=novo_salario-salario;
  printf("Novo salario: %.2f\n", novo_salario);
  printf("Reajuste ganho: %.2f\n", reajuste);
  printf("Em percentual: 15 %c\n", per);
}
else if(salario > 400.00 && salario <=800.00){
  novo_salario=(salario*0.12)+salario;
  reajuste=novo_salario-salario;
  printf("Novo salario: %.2f\n", novo_salario);
  printf("Reajuste ganho: %.2f\n", reajuste);
  printf("Em percentual: 12 %c\n", per);
}
else if(salario >= 800.01 && salario <=1200.00){
  novo_salario=(salario*0.10)+salario;
  reajuste=novo_salario-salario;
  printf("Novo salario: %.2f\n", novo_salario);
  printf("Reajuste ganho: %.2f\n", reajuste);
  printf("Em percentual: 10 %c\n", per);
}
else if(salario >= 1200.01 && salario <=2000.00){
  novo_salario=(salario*0.07)+salario;
  reajuste=novo_salario-salario;
  printf("Novo salario: %.2f\n", novo_salario);
  printf("Reajuste ganho: %.2f\n", reajuste);
  printf("Em percentual: 7 %c\n", per);
}
else if(salario > 2000.01){
  novo_salario=(salario*0.04)+salario;
  reajuste=novo_salario-salario;
  printf("Novo salario: %.2f\n", novo_salario);
  printf("Reajuste ganho: %.2f\n", reajuste);
  printf("Em percentual: 4 %c\n", per);
}
}
