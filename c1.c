// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Escreva um número \n");
    scanf ("%d", &num1);
    printf("Escreva um segundo número \n");
    scanf ("%d", &num2);
    if (num1 > num2) {
    printf ("O primeiro número digitado é maior: %d",&num1);
    } else {
           printf ("O primeiro número digitado é maior: %d",&num2);
    return 0;
} }