#include <stdio.h>

int main(void) {
  int i,j,n;
  int matriz[10][10] = {0};
  int vetorlinha[10] = {0};
  int vetorcoluna[10] = {0};
  int vetordiagonal[2] = {0};
  int analise;

  printf("\nInsira um numero para determinar a dimensao da matriz quadrada: ");
  scanf("%d",&n);

if(n<=10){
 /* Inserindo valores na matriz ixj */
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      
      printf("\n\nInsira o valor correspondente da linha %d, coluna %d: ", i,j);
      scanf("%d", &matriz[i][j]);
    }

    printf("\n");
  }

  /* Mostrando a matriz */
  printf("Matriz Inserida:\n");
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d | ", matriz[i][j]);
    
    }
  printf("\n");
  }  

/* Soma de linhas, colunas e das diagonais */

  //Colunas:
  for(j=0; j<n; j++){
    for(i=0; i<n; i++){
      vetorcoluna[j] += matriz[i][j];
    }
  }

printf("\n");
 
  //Linhas:
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      vetorlinha[i] += matriz[i][j];
    }
  }  
  
printf("\n");

  //Diagonais:
  for(i=0; i<n; i++){
    vetordiagonal[0] += matriz[i][i];
  }     

  i=0;
	for(j=(n-1); j>=0; j--){
    vetordiagonal[1] += matriz[i][j];
    i++;
  } 
 
  analise = 1;
  for(i=0; i<(n-1); i++){
    if(vetorlinha[i]==vetorlinha[i+1] && vetorcoluna[i]==vetorcoluna[i+1] && vetordiagonal[0]==vetordiagonal[1])
    analise++;
  }
    
  if(analise==n){
    printf("\n\nQuadrado perfeito!!");
  }else printf("\n\nQuadrado normal...");

}else printf("\n\nDimensão inserida acima do permitido!!");

return 0;
}