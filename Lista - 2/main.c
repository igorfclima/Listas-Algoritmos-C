#include <stdio.h>

int main(void) {
  for(int i = 1;i < 21;i++){
    printf("- %d\n", i);
  }
  return 0;
}

int main(void){
  for(int i = 15;i > 0;i--){
    printf("%d\n", i);
  }
}

int main(void){
  int num;
  scanf("%d", &num);
  for(int i = 1;i < num;i++){
    i++;
    printf("%d\n", i);
  }
}

int main(void){
  int num, total;
  scanf("%d", &num);
  for(int i = num;i > 1;i--){
    total = num 
  }
  printf("%d", total);
}

int main(void){
  int sum = 0,num, temp;
  scanf("%d", &num);
  for(int i = 1;i <= num;i++){
    if(i % 2 == 0){
      sum += i;
    }
  }
  printf("%d", sum);
}

int main(void){
  int x,b,a = 1;
  scanf("%d", &x);
  for(int i = 1;i <= 10;i++){
    b = x * a;
    a++;
    printf("%d\n", b);
  }
}