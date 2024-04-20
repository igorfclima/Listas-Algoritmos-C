#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*Leia um conjunto indeterminado de palavras de no máximo 50 caracteres e ao
final (estipule uma condição de parada) informe qual foi a maior e a menor
palavra digitada.*/

//Resolução.

int main() {
  int num;
  char word[50];
  char maior[50] = "";
  char menor[50] = "";
  while (1) {
    printf("Digite uma palavra: (Digite fim para parar)\n");
    scanf("%s", word);
    if (strcmp(word, "fim") == 0) {
        printf("Saindo do programa...\n");
        break;
    } else {
        if (strlen(word) > strlen(maior)) {
            strcpy(maior, word);
        }
        if (strlen(menor) == 0 || strlen(word) < strlen(menor)) {
            strcpy(menor, word);
        }
    }
  }
  printf("%s \n%s ", maior, menor);
  return (0);
}

/*Ler uma string de no máximo 50 caracteres e contar quantas letras A essa palavra
possui.*/

//Resolução.

int calc_A(char word[50]){
  int contador = 0;
  for(int i = 0;word[i] != '\0'; i++){
    if(word[i] == 'A' || word[i] == 'a'){
      contador++;
    }
  }
  return contador;
}

int main(){
  char palavra[50];
  scanf("%s", palavra);
  int contador = calc_A(palavra);
  printf("%d", contador);
  return 0;
} 

/*Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa
palavra.*/

//Resolução.

int main(){
  char word[50];
  scanf("%s", word);
  for(int i = 0;word[i] != '\0'; i++){
    if(word[i] == 'A' || word[i] == 'a'){
      printf("%d", i);
    }
  }
  return 0;
}

/*Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as
posições esse caractere aparece na string lida e quantas vezes ele apareceu.*/

//Resolução.

int calc(char word[50], char carac){
  int contador = 0;
  for(int i = 0;word[i] != '\0'; i++){
    if(tolower(word[i]) == tolower(carac)){
        contador++;
    }
  }
  return contador;
}

int main(){
  char palavra[50];
  char letra;
  scanf("%s", palavra);
  scanf(" %c", &letra);
  int contador = calc(palavra, letra);
  printf("%d", contador);
}





