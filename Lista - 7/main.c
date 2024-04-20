#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

void integer(float num){
  if(num == (int)num){
    printf("Inteiro");
  } else{
    printf("Não inteiro");
  }
}

int main(void) {
  float bagel;
  scanf("%f", &bagel);
  integer(bagel);
  return 0;
}

void calcularJuros(float valor, float taxaJuros, float tempo) {
    float total = 0;
    taxaJuros += 1; // Adiciona 1 para converter para um fator de juros compostos
    total = valor * pow(taxaJuros, tempo);
    printf("%.2f", total);
}

int main(void) {
    float valor, taxaJuros, tempo;
    scanf("%f %f %f", &valor, &taxaJuros, &tempo);
    calcularJuros(valor, taxaJuros, tempo);
    return 0;
} 

int men;
float kmprami(float med){
  med *= 0.62;
  
  return med;
}
float cmprapol(float cm){
  cm *= 0.39;
  return cm;
}
int main(void){
  float valor,resultado;
  while(men !=3){
    printf("1- KM para MILHAS\n2- CM para POLEGADAS\n3- Sair do programa\n");
    scanf("%i",&men);
    scanf("%f",&valor);
    switch(men){
      case 1:
        resultado = kmprami(valor);
        printf("%f\n", resultado);
        break;
      case 2:
        resultado = cmprapol(valor);
        printf("%f\n", resultado);
        break;
    }
  }
  return 0;
}
int contador(int n){
  int i=0;
  if(n<0){
    n *= -1;
  }
  do{
    n /= 10;
    i++;
  }while(n!=0);
  return i;
}
int main(void){
  int numero, contagem;
  scanf("%i",&numero);
  contagem = contador(numero);
  printf("O numero de casas é igual a: %i",contagem);
  return 0;

}