#include <stdio.h>




int main() {
    int razao;
    int primeiro;
    int n;
    int i = 0;



    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro);


    printf("Digite a razão: ");
    scanf("%d", &razao);


    printf("Quantos termos? ");
    scanf("%d", &n);




    for (i = 0; i < n; i) {
        printf("%d ", primeiro + i * razao);
    }

    printf("\n");



return 0;
}
