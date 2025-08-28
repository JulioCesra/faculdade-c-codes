#include <stdio.h>
#include <string.h>

void inverterString(char *string, int tam){
    char *inicio = string;
    char *fim = string + tam - 1;

    char temp;
    while(inicio < fim){
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main (){

    char string[50];
    printf("Digite uma string: ");
    fgets(string,50,stdin);
    int tam = strlen(string);
    inverterString(string,tam);
    printf("%s",string);

    return 0;
}
