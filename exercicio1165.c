#include <stdio.h>

int main(){

int n, i, x, j, controle;

scanf("%d", &n);

for(i=1; i<=n; i++){
	controle=0;
	scanf("%d", &x);

	
		for(j=1; j<=x; j++){
			if(x==1)
				printf("%d nao eh primo\n", x);
			if(x%j==0)
			controle++;
		}

		if(controle>2)
			printf("%d nao eh primo\n", x);
		
			else 
				printf("%d eh primo\n", x);
				}
			}
