#include <stdio.h>

int main(){

int num, ult=1, pen=0, i, valor;

scanf("%d", &num);

for(i=0; i <num; i++){
	valor=ult+pen; 
	ult=pen; 
	pen=valor; 
		
if(i<(num-1)){
	printf("%d ", ult);
}
else{
	printf("%d", ult);
	}
}
	printf("\n");
}
