#include<stdio.h>
#include<stdlib.h>


void display(int *input, int tam){
  for(int i=0;i<tam;i++){
    printf("\ndisplay[%d]: %d ", i,input[i]);
  }
  printf("\n");
}

void selectionSort(int *input, int tam){
  int menor;
  int aux;
  for(int i = 0; i<tam;i++){
    menor = input[i];

    for(int j = (i+1);j<tam;j++){
      if(input[j]<menor){

        aux = menor;
        menor = input[j];
        input[j] = aux;

      }else{}
    }
    input[i] = menor;
  }
  display(input,tam);
}

int main(){
    int *vetor;
    int tamanho;
    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho * sizeof(int));
    for(int i = 0; i < tamanho; i++){
      scanf("%d",&vetor[i]);
    }
    selectionSort(vetor,tamanho);

    free(vetor);
}
