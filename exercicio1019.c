#include <stdio.h>

int main(){

int n, hora, min, seg;

scanf("%d", &n);

hora=n/3600;
n=n-(hora*3600);
min=n/60;
seg=n - (min*60);

printf("%d:%d:%d\n", hora, min, seg);

}
