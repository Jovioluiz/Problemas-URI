#include <stdio.h>

int main(){

int hi, mi, hf, mf, hd, md;

scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

if(hi<hf && mi<=mf){
	hd=hf-hi;
	md=mf-mi;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
if(hi==hf && mi<mf){
	hd=24;
	md=mf-mi;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
if(hi==hf && mi>mf){
	hd=24;
	md=mi-mf;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
if(hi<hf && mi>mf){
	hd=(hf-hi)-1;
	md=(60-mi)+mf;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
if(hi>hf && mi<mf){
	hd=(24-hi)+hf;
	md=mf-mi;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
if(hi>hf && mi>=mf){
	hd=(24-hi)+hf;
	md=mi-mf;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
if(hi==hf && mi==mf){
	hd=24;
	md=0;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hd, md);
}
}
