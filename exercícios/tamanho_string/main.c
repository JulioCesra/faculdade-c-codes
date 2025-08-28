#include <stdio.h>

int tamanho_string(char *texto){
    char *p = texto;
    int tamanho = 0;
    while(*p != '\0'){
        tamanho ++;
        p ++;
    }
    return tamanho;
}

int main(){
    char nome[20] = "cesar";
    int tamanho = tamanho_string(nome);
    printf("Tamanho da STRING: %d",tamanho);
}
