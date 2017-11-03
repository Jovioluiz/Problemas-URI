#include <stdio.h>

int main(){

int i, j=2;
double soma=1.0;
 
for(i=3; i<=39; i=i+2){
		soma = soma + ((double)i/(double)j);
		j=j*2;
	}
		printf("%.2f\n", soma);
}
