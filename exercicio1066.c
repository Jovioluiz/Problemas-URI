#include <stdio.h>

int main(){

int n1, n2, n3, n4, n5, par=0, impar=0, positivo=0, negativo=0;

scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	if(n1%2 == 0){
	par+=1;
	}
		else {
	impar+=1;
	}
		if(n1>0){
			positivo+=1;
	}
		else if(n1<0){
			negativo+=1;
	}

	if(n2%2 == 0){
	par+=1;
	}
		else {
	impar+=1;
	}
		if(n2>0){
			positivo+=1;
	}
	 else if(n2<0){
			negativo+=1;
	}

	if(n3%2 == 0){
	par+=1;
	}
		else {
	impar+=1;
	}
		if(n3>0){
			positivo+=1;
	}
		else if(n3<0){
		negativo+=1;
	}

	if(n4%2 == 0){
	par+=1;
	}
	 else{
	impar+=1;
	}
		if(n4>0){
			positivo+=1;
	}
	 else if(n4<0){
			negativo+=1;
	}

	if(n5%2 == 0){
	par+=1;
	}
	 else{
	impar+=1;
	}
		if(n5>0){
			positivo+=1;
	}	
 	else if(n5<0){
			negativo+=1;
	}

printf("%d valor(es) par(es)\n", par);
printf("%d valor(es) impar(es)\n", impar);
printf("%d valor(es) positivo(s)\n", positivo);
printf("%d valor(es) negativo(s)\n", negativo);

}
