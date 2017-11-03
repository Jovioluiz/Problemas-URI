#include <stdio.h>

int main(){

float n1, n2, n3, n4, media, nota_exame, rec_media;

scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0;

printf("Media: %.1f\n", media);

if(media >= 7.0){
	printf("Aluno aprovado.\n");
	}
	
	else if(media < 5.0){
		printf("Aluno reprovado.\n");
		}

		else if(media >= 5.0 && media <= 6.9){
			printf("Aluno em exame.\n");
			}
				
			if(media >= 5.0 && media <= 6.9){
				scanf("%f", &nota_exame);
					printf("Nota do exame: %.1f\n", nota_exame);
						rec_media = (nota_exame + media)/2;
							if(rec_media >= 5.0){
								printf("Aluno aprovado.\n");
								printf("Media final: %.1f\n", rec_media);
									}
										else{
										printf("Aluno reprovado.\n");

										}
								}
				}
