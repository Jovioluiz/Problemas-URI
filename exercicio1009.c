#include <stdio.h>

int main(){

char nome [20];
double sal_fixo, total_vendas;

scanf("%s", nome);
scanf("%lf %lf", &sal_fixo, &total_vendas);

printf("TOTAL = R$ %.2lf\n", (total_vendas*0.15)+sal_fixo);

}
