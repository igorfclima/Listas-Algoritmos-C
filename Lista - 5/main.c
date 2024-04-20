#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*Escreva um programa que leia uma sequência de valores inteiros fornecida pelo
usuário em uma linha de entrada e conte o número de valores positivos, negativos e
zeros.*/

//Resolução.

int main(void) {
  bool done = false;
  int positivos = 0, negativos = 0, zeros = 0, numero;
  printf("Digite uma sequencia de numeros: (Digite uma letra ou simbolo para parar)\n");
  while(done == false){
    if(scanf("%d", &numero) == 1){
      if(numero > 0){
        positivos++;
      } else if(numero < 0){
        negativos++;
      } else{
        zeros++;
      }
    }else{
      done = true;
    }
  }
  printf("Quantidade de números positivos: %d\n", positivos);
  printf("Quantidade de números negativos: %d\n", negativos);
  printf("Quantidade de zeros: %d\n", zeros);
  return 0;
}

/*Escreva um algoritmo em que o usuário insira os valores de a, b e c, e o programa
retorne o valor de x*/

//Resolução.

int main(){
  float a, b, c, x1, x2, raiz;
  scanf("%f %f %f", &a, &b, &c);
  raiz = pow(b, 2) - 4 * a * c;
  if(raiz >= 0){
    x1 = (-b + sqrt(raiz)) / (2 * a);
    x2 = (-b - sqrt(raiz)) / (2 * a);
    printf("As raízes são: %.2f e %.2f\n", x1, x2);
  } else{
    printf("Nao e possivel calcular!");
  }
  return 0;
}

/*Escreva um algoritmo que leia dois números reais A e B e informe se o número A é
um divisor de B*/

//Resolução.

int main(){
  float a, b;
  scanf("%f", &a);
  scanf("%f", &b);
  if(fmod(a, b)== 0){
    printf("Os numeros sao divisiveis");
  }else{
    printf("Os numeros nao sao divisiveis!");
  }
  
  return 0;
}

/*Uma determinada padaria vende uma unidade de torta por 70 reais. Porém, uma
fatia de torta custa 10 reais, e uma torta rende 10 fatias. Crie um programa em C que
identifique se o usuário deseja comprar a unidade de torta ou a fatia, e a quantidade
desejada, o programa deve gerar o preço que o cliente deve pagar.*/


//Resolução.

void Torta(int unidades){
  int total;
  total = unidades * 70;
  printf("O preço total vai ser R$ %d,00", total);
}

void Fatias(int unidades){
  int total;
  total = unidades * 10;
  printf("O preço total vai ser R$ %d,00", total);
}

int main(){
  int quan, choose;
  printf("Voce gostaria de comprar a torta inteira ou apenas a fatia?\n1 - Torta\n2 - Fatia\n");
  scanf("%d", &choose);
  printf("Quantas voce vai querer? ");
  scanf("%d", &quan);
  switch(choose){
    case 1:
    Torta(quan);
    break;
    case 2:
    Fatias(quan);
    break;
  }
  
  return 0;
}

/*Escreva um programa que gere e exiba os números primos dentro de um intervalo
fornecido pelo usuário. O programa deve solicitar ao usuário que insira o intervalo
desejado (ex, de 1 a 100) e, em seguida, calcular e exibir os números primos dentro
desse intervalo*/

//Resolução.

void Primos(int loop){
  for(int i = 1;i <= loop;i++){
    int num = i;
    int resultado = 0;
    for (int j = 2; j <= num / 2; j++) {
        if (num % j == 0) {
          resultado++;
          //Nao e primo
        } 
     }
    if(resultado == 0){
      //E primo
      printf("%d\n", i);
    }
  }
}

int main(){
  int numero;
  scanf("%d", &numero);
  Primos(numero);
}

/*Escreva um programa que verifique se uma palavra fornecida pelo usuário é um
palíndromo. Um palíndromo é uma palavra que é lida da mesma forma de trás para
frente. O programa deve ignorar maiúsculas e minúsculas ao fazer a verificação*/

//Resolução.

void palindrome(char *str){
  char invert[50];
  int tamanho = strlen(str);
  for(int i = tamanho - 1,j = 0;i >= 0;i--,j++){
    invert[j] = str[i];
  }
  invert[tamanho] = '\0';
  if(strcasecmp(str,invert) == 0){
    printf("Palindromo!");
  } else{
    printf("Não é um palindromo!");
  }
}
int main(){
  char str[50];
  scanf("%s", str);
  palindrome(str);
  return 0;
}

/*Escreva um programa que conte o número de vogais e consoantes em uma frase
fornecida pelo usuário. Utilize estruturas condicionais para distinguir entre vogais e
consoantes*/

//Resolução.

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

/*Crie um programa que simule um sorteio de loterias. O programa deve gerar
aleatoriamente 6 números (entre 1 e 60) para representar os números sorteados. Em
seguida, deve permitir ao usuário inserir 6 números e verificar se algum deles
coincide com os números sorteados.*/

//Resolução.

int main(){
  int nums[6], sorteados[6], acertos = 0, i, j;
  for(i = 0; i < 6;i++){
    sorteados[i] = rand() % 60;
    printf("%d\n", sorteados[i]);
  }
  for(i = 0 ; i < 6;i++){
    scanf("%d", &nums[i]);
  }
  for(i = 0;i < 6; i++){
    for(j = 0;j < 6;j++){
      if(nums[i] == sorteados[j]){
        acertos++;
        break;
      }
    }
  }
  if(acertos == 6){
    printf("Parabens voce ganhou na loteria!");
  }else{
    printf("Voce perdeu!");
  }
  return 0;
}

/*Desenvolva um programa que simule as operações de um caixa eletrônico,
permitindo ao usuário verificar o saldo da conta, sacar dinheiro e depositar valores.
Permita que o menu de escolha de opções fique disponível até que o usuário digite
“0” para sair do programa. Dica: utilize estruturas condicionais para controlar as
diferentes operações, crie uma variável para armazenar o saldo inicial do usuário
com o valor 1000.*/

//Resolução.

int deposito(int valor,int valor_total){
  valor_total += valor;
  return valor_total;
}
int saque(int valor,int valor_total){
  valor_total -= valor;
  return valor_total;
}

int main(){
  bool done = false;
  int total = 1000,choose = 0, valor_deposito = 0,valor_saque = 0;
  while(!done){
    scanf("%d", &choose);
    switch(choose){
      case(0):
      done = true;
      break;
      case(1):
      printf("%d\n", total);
      break;
      case(2):
      scanf("%d", &valor_saque);
      total = saque(valor_saque,total);
      break;
      case(3):
      scanf("%d", &valor_deposito);
      total = deposito(valor_deposito,total);
      break;
    }
  }
  return 0;
}

/* Implemente o clássico jogo da forca em que o jogador tem que adivinhar uma
palavra secreta, inserindo letras uma de cada vez. Dicas: utilize loops e estruturas
condicionais para controlar o fluxo do jogo e verificar se as letras inseridas estão na
palavra. Utilize funções da biblioteca string.h. Crie uma string para definir no código a
palavra secreta.
*/

//Resolução.

int main(){
  char forca[6] = "forca";
  int tamanho = strlen(forca);
  char letra, guess[6] = "_____";
  int tentativas = 8;

  while(tentativas > 0 && strcasecmp(guess, forca) != 0){
    scanf(" %c", &letra);
    letra = tolower(letra);
    for(int i = 0;i < tamanho;i++){
      if(letra == tolower(forca[i])){
        guess[i] = letra;
        printf("%s\n", guess);
      }
    }
  }
  if(strcasecmp(guess, forca) == 0){
    printf("Acertou!\n");
  }
  return 0;
}

/*Escreva um programa que resolva o seguinte problema: uma cópia “xerox” custa
R$ 0,25 por folha, mas acima de 100 folhas esse valor cai para R$ 0,20 por
unidade. Dado o total de cópias (recebidas do usuário), informe o valor a ser
pago. Seu programa deve exibir uma mensagem de erro em caso de quantidade
inválida*/

//Resolução.

int main(){
  int quantidade;
  float valor;
  scanf("%d", &quantidade);
  if(quantidade > 100){
    valor = quantidade * 0.20;
    printf("O valor a ser pago e %.2f", valor);
  } else if(quantidade > 0){
    valor = quantidade * 0.25;
    printf("O valor a ser pago e %.2f", valor);
  } else{
    printf("A quantidade inserida e invalida!");
  }
} 

/*Uma família procura organizar suas alternativas de viagem para as férias. Para isso, ela pretende levar em conta a taxa de probabilidade de chuva local Pchuva e a distância Dist. Sabe-se que:

a. Pchuva é contado em uma escala de 0% a 100% e, para distâncias
maiores que 200Km, deve ser no máximo 58%.

b. Como a família vai de carro, a distância máxima são 400Km.

Crie um programa em C que receba o nome, distância e probabilidade de chuva
local de uma alternativa, criada pelo usuário, assim julgando e imprimindo se é
uma opção viável com base nos critérios estabelecidos.*/

//Resolução.

int main(){
  int Pchuva, Dist;
  char nome[50];

  scanf("%d %d", &Pchuva, &Dist);
  scanf("%s", nome);

  if(Pchuva < 58){
    printf("Nao viavel!");
  } else if(Dist < 400){
    printf("Nao viavel!");
  }
}

/*Uma churrasqueira consegue preparar uma carne de boi em 15 minutos, se for
mal passada, 20 minutos, se for ao ponto e 25 minutos, se for bem passada.
Sabendo que a churrasqueira deve ser pré aquecida por 10 minutos antes de ser
utilizada, crie um programa em C que receba o ponto da carne desejado e
imprima o tempo total de preparo*/

//Resolução.

int main(){
  int choose;
  scanf("%d", &choose);
  switch(choose){
    case 1:
    printf("A carne vai  demorar 25 minutos.");
    break;
    case 2:
    printf("A carne vai  demorar 30 minutos.");
    break;
    case 3:
    printf("A carne vai  demorar 35 minutos.");
    break;
  }
  return 0;
}

int main(){
  int num1 = 2;
  float num2 = 50.11;
  num1 =num1 * (int)num2;
  if(num1 > 100 && num1 < 10.23){
    printf("verde");
  } else if( num1 < num2 || num1 < 100){
    printf("amarelo");
  } else if(num1 == 100.22){
    printf("amarelo");
  } else{
    printf("azul");
  }
  return 0;
}

/*Elabore um programa em C que inicialize uma variável X inteira com o valor 0
para, então, incrementar seu valor de a cada múltiplo de 3, até que X passe a
valer 100. Imprima o último múltiplo de 3 encontrado.
*/

//Resolução.

int main(){
  int x = 0;
  for(int i = 1;i < 100;i++){
    x = i;
    if(x % 3 == 0){
      printf("%d\n", x);
    }
  }
  return 0;
}

/*Escreva um programa que solicite ao usuário que insira as notas de várias
disciplinas e calcule a média dessas notas. O programa deve permitir ao usuário
inserir o número de disciplinas e, em seguida, pedir as notas de cada uma. No
final, o programa deve exibir a média das notas*/

//Resolução.

int main(){
  int quant;
  float notas, total = 0,media = 0;
  scanf("%d", &quant);
  for(int i = 0;i < quant;i++){
    scanf("%f", &notas);
    total += notas;
  }
  media = total / quant;
  printf("%.2f", media);
  return 0;
}

/*Escreva um programa que verifique se um número fornecido pelo usuário é um
número perfeito. Um número perfeito é aquele que é igual à soma de seus
divisores, excluindo o próprio número. Por exemplo, 28 é um número perfeito
porque 1 + 2 + 4 + 7 + 14 = 28*/

//Resolução.

int main(){
  int num, i, temp = 0;
  scanf("%d", &num);
  for(i = 0;i < num;i++){
    if(num % i == 0){
      temp += i;
    }
  }
  if(temp == num){
    printf("O numero e perfeito!");
  } else{
    printf("N pefeto!");
  }
  return 0;
}

/*Escreva um programa que verifique se um ano fornecido pelo usuário é bissexto
ou não. Um ano é bissexto se for divisível por 4, exceto anos divisíveis por 100, a
menos que sejam divisíveis por 400*/

//Resolução.

int main(){
  int ano;
  scanf("%d", &ano);
  if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
    printf("Ano bissexto");
  }
  return 0;
}

/*Crie um programa que calcule o montante final após um período de tempo
determinado, considerando um investimento inicial, uma taxa de juros anual e o
número de períodos de capitalização. Utilize a fórmula para juros compostos:
Montante = Principal * (1 + Taxa de Juros)^Número de Períodos*/

double calcularMontante(double principal, double taxaDeJuros, int numPeriodos) {
    return principal * pow(1 + taxaDeJuros, numPeriodos);
}

int main() {
    double principal, taxaDeJuros;
    int numPeriodos;
    printf("Informe o valor do investimento inicial: ");
    scanf("%lf", &principal);

    printf("Informe a taxa de juros anual (em decimal): ");
    scanf("%lf", &taxaDeJuros);

    printf("Informe o numero de periodos de capitalizacao: ");
    scanf("%d", &numPeriodos);
  
    double montanteFinal = calcularMontante(principal, taxaDeJuros, numPeriodos);
    printf("O montante final do investimento apos %d periodos de capitalizacao sera: %.2f\n", numPeriodos, montanteFinal);
  
  return 0;
}