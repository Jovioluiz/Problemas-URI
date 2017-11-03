#include <stdio.h>

int main(){
  int num, n, i, j, soma, resto;

  scanf("%d", &num);

  for(i=1; i<=num; i++){
    scanf("%d", &n);
    soma=0;
    j=1;
    while (soma<n) {
      resto=n%j;
      if(resto==0)
      soma+=j;
      j++;
    }
    if(soma==n && n!=1){
    printf("%d eh perfeito\n", n);
  }
    else{
    printf("%d nao eh perfeito\n", n);
  }
}

}
