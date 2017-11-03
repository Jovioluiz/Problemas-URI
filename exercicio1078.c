#include <stdio.h>

int main(){

	int n, i, mult;

	scanf("%d", &n);
	
	if(n > 2 && n < 1000){
		for(i=1; i<=10; i++){
			mult=i*n;
			printf("%d x %d = %d\n", i, n, mult);
		}
	}
}
