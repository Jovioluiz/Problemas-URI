#include <stdio.h>

int main(){

int idadedias, ano, mes, dia;

scanf("%d", &idadedias);

ano=idadedias/365;
mes=(idadedias%365)/30;
dia=(idadedias%365)%30;

printf("%d ano(s)\n", ano);
printf("%d mes(es)\n", mes);
printf("%d dia(s)\n", dia);
}
