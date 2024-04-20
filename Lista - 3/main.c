#include<stdio.h>
#include <locale.h>

int main() {
 int num, i, resultado = 0;

 printf("Digite um número: ");
 scanf("%d", &num);

 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
    }
 }

 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);

 return 0;
}

int main(){
  int a = 1, b = 1, c;
  for(int i = 0;i <= 10;i++){
    c = a + b;
    a = b;
    b = c;
    printf("%d\n", c);
  }
  return 0;
}

int main(){
  int d = 0;
  for(int i = 1000;i <= 9999;i++){
    int a = i / 100;
    int b = i % 100;

    int c = a +b;

    if(i == (c * c)){
      d++;
      printf("%d\n", i);
    }
  }
  printf("Numeros: %d", d);
  return 0;
}

int main(){
  int a, b, c, d, temp;
  scanf("%d", &d);
  temp = d;
  c = d % 10;
  d = d / 10;
  b = d % 10;
  a = d / 10;
  if(temp == (a * a * a) + (b * b * b) + (c * c * c)){
    printf("É um numero de armstrong");
  } else{
    printf("Nao e um numero de armstrong!");
  }
  return 0;
}