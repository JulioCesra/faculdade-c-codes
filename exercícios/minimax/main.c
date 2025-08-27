#include <stdio.h>

void minimax(int vetor[],int tamanho,int *a,int *b){
    int maior_valor = vetor[0];
    int menor_valor = vetor[0];
    for(int i = 0; i < tamanho; i ++){
        if(vetor[i] > maior_valor){
            maior_valor = vetor[i];
        }
        if(vetor[i] < menor_valor){
            menor_valor = vetor[i];
        }
    }
    *a = menor_valor;
    *b = maior_valor;
}

int main(){

int a = 0;
int b = 0;
int vetor[] = {20,21,43,7,787,3,2321,43,6,788};
int tamanho = sizeof(vetor) / sizeof(vetor[0]);

minimax(vetor,tamanho,&a,&b);

printf("Valor de A: %d\nValor de B: %d",a,b);
}
