#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int guess, random;
  random = rand() % 100;
  printf("Digite um numero de 0 a 100: ");
  scanf("%d", &guess);
  while (guess != random) {
    if (guess > random) {
      printf("O numero e menor\n");
    } else {
      printf("O numero e menor!\n");
    }
    printf("Digite outro numero de 0 a 100: ");
    scanf("%d", &guess);
  }
  return 0;
}

int main(){
  int valor, choose;
  float convertido;
  printf("Digite quantos reais vc tem: ");
  scanf("%d", &valor);
  printf("Escolha uma moeda para converter: \n1 - Dolar\n2 - Euro\n3 - Pesos\n");
  scanf("%d", &choose);
  switch(choose){
    case 1: convertido = valor / 4.98;
    break;
    case 2: convertido = valor / 5.45;
    break;
    case 3: convertido = valor * 169.96;
    break;
  }
  printf("O valor convertido e: %.2f", convertido);
  return 0;
}
int multi(int n1, int n2){
  int resultado;
  resultado = n1 * n2;
  return(resultado);
}
int divi(int n1, int n2){
  int resultado;
  resultado = n1 / n2;
  return(resultado);
}
int subtr(int n1, int n2){
  int resultado;
  resultado = n1 - n2;
  return(resultado);
}
int soma(int n1, int n2){
  int resultado;
  resultado = n1 + n2;
  return(resultado);
}
int main(void){
  int V1, V2, resultado, choose;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  printf("Escolha qual equacao vc quer fazer:\n1 - Multiplicacao:\n2 - Divisao:\n3 - Subtracao:\n4 - Soma\n");
  scanf("%d", &choose);
  switch(choose){
    case 1:
    resultado = multi(V1, V2);
    printf("O resultado e: %d", resultado);
    break;
    case 2:
    resultado = divi(V1, V2);
    printf("O resultado e: %d", resultado);
    break;
    case 3:
    resultado = subtr(V1, V2);
    printf("O resultado e: %d", resultado);
    break;
    case 4:
    resultado = soma(V1, V2);
    printf("O resultado e: %d", resultado);
    break;
  }
  return 0;
}

int main(){
  float peso, imc, altura;
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  peso = peso / altura;
  imc = peso / altura;
  
  if(imc > 18.5){
    if(imc < 24.9){
      printf("Peso ideal");
    } else if(imc < 29.9){
      printf("Levemente acima do peso");
    } else if(imc < 34.9){
      printf("Obesidade grau 1");
    } else if(imc < 39.9){
      printf("Obesidade grau 2");
    }else if (imc > 40){
      printf("Obesidade 3");
    }
  } else{
    printf("Abaixo do peso!");
  }
  return 0;
}