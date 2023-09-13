// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int salario;
    int gastos;
    printf("Escreva seu sálario \n");
    scanf ("%d", &salario);
    printf("Escreva seus gastos \n");
    scanf ("%d", &gastos);
    if (gastos <= salario) {
    printf ("Gastos dentro do orçamento \n");
    } else {
          printf ("Orçamento estourado \n"); 
    return 0;
} }