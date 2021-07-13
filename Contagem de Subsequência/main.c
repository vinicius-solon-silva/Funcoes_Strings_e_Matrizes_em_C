#include <stdio.h>

int main(void) {
  int a,i,agora=0,ultima=0,contadora=0,aux=0;

 
  for(i=0; i>=agora; i=agora){

    printf("\n\nDigite um valor para inseri-lo na sequencia, caso voce insira um valor negativo, a sequencia termina:  ");
    scanf("%d", &agora);
    
    if(agora<0){
      printf("\n\nFim da sequencia!!");
      break;
    }
    
    if(agora>=0){

      if(ultima>agora){
        contadora++;
      }
      if(contadora>aux){
        aux = contadora;
      }else contadora = 1;

    }
    ultima = agora;
    
  }

  printf("\n\nO comprimento da maior subsequencia estritamente decrescente eh: %d", aux);

return 0;
}