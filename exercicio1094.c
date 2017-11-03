#include <stdio.h>

int main(){

  int num, q, i, tc=0, tr=0, ts=0, cont=0;
  float pc, pr, ps;
  char cobaia;

  scanf("%d", &num);  //casos teste
  for(i=1; i<=num; i++){  //enquanto i <= num vai ler a qntdade e o tipo da cobaia
    scanf("%d %c", &q, &cobaia);  //le a qntdade e o tipo de cobaia
    switch(cobaia){
      case 'C':
      tc = tc + q;  //total de coelhos
      cont = cont+q;  //qntdade de cobaias
      break;
      case 'R':
      tr = tr + q;  //total de ratos
      cont = cont + q;  //qntdade de cobaias
      break;
      case 'S':
      ts = ts + q;  //total de sapos
      cont = cont + q;  //qntdade de cobaias
      break;
    }
    pc = (tc*100.0)/cont; //percentual de coelhos
    pr = (tr*100.0)/cont; //percentual de ratos
    ps = (ts*100.0)/cont; //percentual de sapos
  }
  printf("Total: %d cobaias\n", cont);
  printf("Total de coelhos: %d\n", tc);
  printf("Total de ratos: %d\n", tr);
  printf("Total de sapos: %d\n", ts);
  printf("Percentual de coelhos: %.2f %%\n", pc);
  printf("Percentual de ratos: %.2f %%\n", pr);
  printf("Percentual de sapos: %.2f %%\n", ps);
}
