#include <stdio.h>
 
int main() {
 
    double raio, area, pi = 3.14159;
    scanf("%lf", &raio);
    area = pi*(raio*raio);
    printf("%.4lf\n", area);

    return 0;
}
