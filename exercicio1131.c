#include <stdio.h>

int main(){
  int golI, golG, x, cont=0, inter=0, gremio=0, empate=0;

    do {
    scanf("%d %d", &golI, &golG);
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &x);
    cont++;
    if(golI>golG){
      inter++;
    }
    else if(golI==golG){
      empate++;
    }
    else if(golI<golG){
      gremio++;
    }
  } while(x==1);

  printf("%d grenais\n", cont);
  printf("Inter:%d\n", inter);
  printf("Gremio:%d\n", gremio);
  printf("Empates:%d\n", empate);
  if(inter>gremio){
    printf("Inter venceu mais\n");
  }
  else{
    printf("Gremio venceu mais\n");
  }

  return 0;
}
