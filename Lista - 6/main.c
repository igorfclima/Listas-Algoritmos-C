#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 1
int fatorial(int n){
  int fat;
  for(fat = 1; n > 1; n = n - 1)
  {      
      fat = fat * n;
  }
  return fat;
}

int main(){
  int num;
  scanf("%d", &num);
  if(num >= 0){
    int resultado = fatorial(num);
    printf("%d", resultado);
  }
  return 0;
}

//2
float celsio(float temp){
  float resultado = (temp * (9.0/5.0) + 32);
  return resultado;
}

float faren(float temp){
  float resultado = (temp - 32) * (5.0/9.0);
  return resultado;
}

int main(){
  int choose;
  float temp, resultado = 0;
  scanf("%f", &temp);
  scanf("%d", &choose);
  switch(choose){
    case(1):
      resultado = celsio(temp);
      printf("%.2f", resultado);
      break;
    case(2):
    resultado = faren(temp);
      printf("%.2f", resultado);
    break;
    default:
    printf("Erado!");
    break;
  }
  return 0;
}


// 3
void vogal(char *frase){
  int tamanho = strlen(frase);
  for(int i = 0;i < tamanho - 1;i++){
    if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U') {
        printf("%c é uma vogal!\n", frase[i]);
    } else {
        printf("%c é uma consoante!\n", frase[i]);
    }
  }
}

int main(){
  char fra[50];
  printf("Escreva uma frase de até 50 caracteres: \n");
  fgets(fra, sizeof(fra), stdin);
  vogal(fra);
  return 0;
}
// 4
void Primos(int loop){
  for(int i = 1;i <= loop;i++){
    int num = i;
    int resultado = 0;
    for (int j = 2; j <= num / 2; j++) {
        if (num % j == 0) {
          resultado++;
        } 
     }
    if(resultado == 0){
      printf("%d\n", i);
    }
  }
}

int main(){
  int numero;
  scanf("%d", &numero);
  Primos(numero);
}
