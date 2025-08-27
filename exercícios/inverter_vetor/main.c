#include <stdio.h>

void inverter_vetor(int vetor[],int tamanho_vetor){
    int *inicio_vetor = vetor;
    int *final_vetor = vetor + tamanho_vetor - 1;
    int temp = 0;
    while (inicio_vetor < final_vetor){
        temp = *inicio_vetor;
        *inicio_vetor = *final_vetor;
        *final_vetor = temp;
        inicio_vetor ++;
        final_vetor --;
    }
}

void imprimir_vetor(int vetor[],int tamanho_vetor){
    for(int i = 0; i < tamanho_vetor; i ++){
        printf("%d ",vetor[i]);
    }
}

int main(){

int vetor[] = {1,2,3,4,5,6,7,8};
int tamanho = sizeof(vetor) / sizeof(vetor[0]);
inverter_vetor(vetor,tamanho);
imprimir_vetor(vetor,tamanho);

return 0;
}
