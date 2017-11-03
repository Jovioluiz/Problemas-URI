#include <stdio.h>

int main(){

  float sal;

  scanf("%f", &sal);

  if(sal >= 0.00 && sal <=2000.00){
    printf("Isento\n");
  }
  else if(sal>=2000.01 && sal <=3000.00){
    sal=(sal-2000.00)*0.08;
    printf("R$ %.2f\n", sal);
  }
  else if(sal >=3000.01 && sal <=4500.00){
    sal=((0.08*1000)+(0.18*(sal-3000.00)));
    printf("R$ %.2f\n", sal);
  }
  else if(sal > 4500.00){
    sal=(0.08*1000.00)+(0.18*1500.00)+(0.28*(sal-4500.01));
    printf("R$ %.2f\n", sal);
  }
}
