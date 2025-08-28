#include <stdio.h>
#include <string.h>

int comparar_strings(char *texto1, char *texto2){
    if(strlen(texto1) != strlen(texto2)){
        return 0;
    }
    while(*texto1 != '\0'){
        if(*texto1 != *texto2){
            return 0;
        }
        if(*texto1 == *texto2){
            return 1;
        }
        texto1 ++;
        texto2 ++;
    }
}

int main(){
    char nome1[25] = "JULIO";
    char nome2[25] = "JULIZ";
    int validacao = comparar_strings(nome1,nome2);
    printf("Validação: %d",validacao);
}
