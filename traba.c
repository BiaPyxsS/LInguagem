// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int total=0, num;
    while (total < 20) {
        printf("total %d \n", total);
        printf("Entre com um número:");
        scanf ("%d", &num);
        total +=num;
    }
    printf ("final=%d \n", total);
}