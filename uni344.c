// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num1;
    int num2;
    int med;
    char nome[50];
    printf("Digite o nome do aluno \n");
    scanf("%S", &nome);
    printf("Digite o valor da primeira nota:");
    scanf("%d", &num1);
    printf("Digite o valor da segunda nota:");
    scanf("%d", &num2);
    printf("O nome do aluno é %S \n", nome );
    med = (num1 + num2) / 2;
      printf("O média do aluno foi %d \n", med );
    if (med >= 6) {
    printf ("O aluno foi aprovado!");
    } else {
        printf("O Aluno foi reprovado.");
    }
    return 0;
}