#include <stdio.h>

int main(){

int num_id, hrs_trabalhadas;
float valor_hr, salario;

scanf("%d %d", &num_id, &hrs_trabalhadas);
scanf("%f", &valor_hr);

salario = hrs_trabalhadas * valor_hr;

printf("NUMBER = %d\n", num_id);
printf("SALARY = U$ %.2f\n", salario);

}
