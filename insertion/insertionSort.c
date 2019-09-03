#include<stdio.h>
#include<stdlib.h>


void display(int *input, int tam){
  for(int i=0;i<tam;i++){
    printf("\ndisplay[%d]: %d ", i,input[i]);
  }
  printf("\n");
}

void insertionSort(int *input, int tam){
  int target;
  int j;
  for(int i = 0;i<tam;i++){
    target = input[i];
    for(j = (i-1);j>=0;j--){
      if(input[j]>target){
        input[j+1] = input[j];
      }else{
        break;
      }
    }
    input[j+1] = target;
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
  insertionSort(vetor,tamanho);

  free(vetor);
}
