#include <stdio.h>

int main(){

int j;
double soma=1.0;
 
for(j=2; j<=100; j++){
		soma = soma + (1.0/j);
	}
		printf("%.2lf\n", soma);
}
