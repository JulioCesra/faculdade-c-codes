#include <stdio.h>

void trocar_valores(int *a,int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

int a = 20;
int b = 12;
trocar_valores(&a,&b);
printf("Valor de A: %d\nValor de B: %d\n",a,b);
return 0;
}
