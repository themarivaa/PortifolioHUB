#include <stdio.h>

int main() {
    int numero;
    int i = 1;




    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }





return 0;
}
