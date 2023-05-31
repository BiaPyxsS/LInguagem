
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int resp;
    do {
    printf("Primeira nota");
    scanf ("%f", &nota1);
        printf("Segunda nota");
    scanf ("%f", &nota2);
    media = (nota1 + nota2) /2 ;
    printf ("media e %f \n", media);
    printf ("Digite 1 para continuar e 2 para sair \n");
    scanf ("%d", &resp);
    } while (resp == 1);
}