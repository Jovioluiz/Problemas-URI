#include <stdio.h>

int main(){
  int n, x, y, j, i, soma=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d %d", &x, &y);


  if(x%2==1){
    soma=0;
  for(j=1; j<=y; j++){
    soma=soma+x;
    x+=2;

  }
  printf("%d\n", soma);
}
  else{
    x++;
    soma=0;
    for(j=0; j<y; j+=1){
      soma=soma+x;
      x+=2;

  }
    printf("%d\n", soma);
}
}
}
