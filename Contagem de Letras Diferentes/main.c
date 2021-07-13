#include <stdio.h>
#include <string.h>

int main(void) {

  int letras_diferentes(char palavra[], int tam);
  char string[30];
  int quantidade,largura;

  printf("\nEntre com uma palavra de ate 30 letras para verificar quantos caracteres diferentes a mesma possui:  ");

  scanf("%s", string);
  largura = strlen(string);
  printf("\n\nQuantidade de letras: %d", largura);

  quantidade = letras_diferentes(string,largura);
  printf("\n\nQuantidade de letras diferentes: %d", quantidade);

  return 0;
}

int letras_diferentes(char palavra[], int tam){
  int i,j,n=0,diferente=0;

   for(i=0; i<tam; i++) 
    for(j=0; j<tam; j++){           
      if(palavra[i] == palavra[j] && i!=j){
      n++;
      break;
      }
    }
    
  diferente = tam - n;
  return diferente;
}