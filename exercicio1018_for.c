#include <stdio.h>
#include <math.h>

int main(){

int valor, i=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;

scanf("%d", &valor);

printf("%d\n", valor);

for (i=0; i<=valor; i++){
	if(i*100>valor){
		n100=i-1;
		valor=valor-n100*100;
		break;
	}
}

for(i=0; i<=valor; i++){
	if(i*50>valor){
	n50=i-1;
	valor=valor-n50*50;
	break;
	}
}

for(i=0; i<=valor; i++){
	if(i*20>valor){
	n20=i-1;
	valor=valor-n20*20;
	break;
	}
}

for(i=0; i<=valor; i++){
	if(i*10>valor){
	n10=i-1;
	valor=valor-n10*10;
	break;
	}
}

for(i=0; i<=valor; i++){
	if(i*5>valor){
	n5=i-1;
	valor=valor-n5*5;
	break;
	}
}

for(i=0; i<=valor; i++){
	if(i*2>valor){
	n2=i-1;
	valor=valor-n2*2;
	break;
	}
}

for(i=0; i<=valor; i++){
	if(i*1>=valor){
	n1=i;
	valor=valor-n1*1;
	break;
	}
}

	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);
	printf("%d nota(s) de R$ 2,00\n", n2);
	printf("%d nota(s) de R$ 1,00\n", n1);

	return 0;
}
