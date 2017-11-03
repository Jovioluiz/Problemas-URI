#include <stdio.h>

int main(int argc, char const *argv[]) {

  int i, x, fat=1;

  scanf("%d", &x);

    for(i=x; i>=1; i--){
      fat = fat * i;
    }
    printf("%d\n", fat);
    return 0;
}
