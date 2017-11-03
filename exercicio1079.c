#include <stdio.h>

int main(){

int num_casos, i;

double media, n1, n2, n3;

scanf("%d", &num_casos);

for(i=1; i<=num_casos; i++){

scanf("%lf %lf %lf", &n1, &n2, &n3);

media=(n1*2.0+n2*3.0+n3*5.0)/(2+3+5);

printf("%.1lf\n", media);
	}
}
