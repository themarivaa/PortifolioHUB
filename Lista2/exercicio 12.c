#include <stdio.h>

int main() {
    int razao;
    int terceiro;
    int n;
    int primeiro;
    int i = 0;


    printf("Digite o terceiro termo da PA: ");
    scanf("%d", &terceiro);


    printf("Digite a razão: ");
    scanf("%d", &razao);


    printf("Quantos termos (maior que 3)? ");
    scanf("%d", &n);



primeiro = terceiro - 2 * razao;
for (i = 0; i < n; i) {
        printf("%d ", primeiro + i * razao);
    }

    printf("\n");



return 0;
}

