#include <stdio.h>
#include <math.h>

int main(){

double a, b, c, A, B, C;

scanf("%lf %lf %lf", &a, &b, &c);

if(a>=b && a>=c){
	A=a;
}
else if (b>=a && b>=c) {
	A=b;
}
else if (c>=a && c>=b) {
	A=c;
}
if (a<=b && b<=c) {
	C=a;
}
else if(b<=a && b<=c) {
    C=b;
}
else if(c<=b && c<=a){
  C=c;
  }
if(b==A && c==C||c==A && b==C){
  B=a;
    }
else if(a==A && c==C||c==A && a==C){
  B=b;
  }
else if(a==A && b==B||b==A && a==B){
  B=c;
  }
if (A>=(B+C)||B>=(A+C)||C>=(B+A)) {
	printf("NAO FORMA TRIANGULO\n");
}
if (A*A==(B*B)+(C*C)) {
	printf("TRIANGULO RETANGULO\n");
}
if (A*A>(B*B)+(C*C)) {
	printf("TRIANGULO OBTUSANGULO\n");
}
if (A*A<(B*B)+(C*C)) {
	printf("TRIANGULO ACUTANGULO\n");
}
if (a==b && b==c && c==a) {
	printf("TRIANGULO EQUILATERO\n");
}
else if (a==b || b==c || a==c) {
	printf("TRIANGULO ISOSCELES\n");
}

}
