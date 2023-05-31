// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int I;
    printf("Digite um valor inteiro para I:");
    scanf ("%d", &I);
    while ( I!= 0 ) {
        printf ("%d \n", I);
        printf ("Digite um valor:");
        scanf ("%d", &I);
    }
}