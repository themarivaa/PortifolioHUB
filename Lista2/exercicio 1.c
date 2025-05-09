#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;
    float media;



    while (1) {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        if (numero < 0)
            break;

        soma += numero;
        quantidade++;


    }




    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Média: %.2f\n", media);



    } else {
        printf("Nenhum número válido foi digitado.\n");
    }

    return 0;
}






