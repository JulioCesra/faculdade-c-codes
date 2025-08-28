#include <stdio.h>
#include <string.h>

void concatenar_string(char *texto1, char *texto2){
    // Aponta para o primeiro valor do vetor texto1
    char *p1 = texto1;
    // Aponta para o primeiro valor do vetor texto2
    char *p2 = texto2;
    // Percorre a STRING até o caractere final \0 e aguarda
    while(*p1 != '\0'){
        // Vai passando pelos caracteres da string
        p1 ++;
    }
    while(*p2 != '\0'){
        // O valor final da string 1 passa a ser o primeiro da string 2
        *p1 = *p2;
        p2 ++; // Percorre os caracteres da string 2
        p1 ++; // Aumenta o tamanho da string 1
    }
    *p1 = '\0'; // Adiciona no string texto1 o caractere special \0
}

int main(){

char texto1[20] = "Julio";
char texto2[20] = " Cesar";

concatenar_string(texto1,texto2);

printf("%s",texto1);

return 0;
}

