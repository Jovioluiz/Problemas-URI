#include <stdio.h>

int main(){

int tempo_gasto, vel_media, kml=12;

scanf("%d %d", &tempo_gasto, &vel_media);

printf("%.3lf\n", (double) (tempo_gasto*vel_media)/kml);

}
