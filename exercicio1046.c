#include <stdio.h>

int main(){

int hrinicio, hrfinal, hrduracao;

scanf("%d %d", &hrinicio, &hrfinal);

if(hrinicio<hrfinal){
	hrduracao=hrfinal-hrinicio;
	printf("O JOGO DUROU %d HORA(S)\n", hrduracao);
	}
if(hrinicio==hrfinal){
	hrduracao=24;
	printf("O JOGO DUROU %d HORA(S)\n", hrduracao);
	}
if(hrinicio>hrfinal){
	hrduracao=(24-hrinicio)+hrfinal;
	printf("O JOGO DUROU %d HORA(S)\n", hrduracao);
	}
}
