#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;



    while (1) {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (numero > 0)
            positivos;
        else
            negativos;
    }

    printf("Positivos: %d\nNegativos: %d\n", positivos, negativos);







    return 0;

}
