#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;
    float media;



    while (1) {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &numero);

        if (numero < 0)
            break;

        soma += numero;
        quantidade++;


    }




    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("M�dia: %.2f\n", media);



    } else {
        printf("Nenhum n�mero v�lido foi digitado.\n");
    }

    return 0;
}






