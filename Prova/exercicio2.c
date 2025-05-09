#include<stdio.h>



int main() {
    int num;
    int positivos = 0;
    int negativos = 0;


    printf("Digite um número inteiro (0 para acabar):\n");

    do {
        printf("Número: ");
        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        }
    } while (num != 0);



    printf("\nResultados:\n");
    printf("%d Números positivos \n", positivos);
    printf("%d Números negativos \n", negativos);



    int diferenca = positivos - negativos;
    int diferenca2 = negativos - positivos;



    if (positivos > negativos) {
        printf(  "Diferenca de %d a mais de números positivos que negativos.\n" , diferenca);
    } else if (negativos > positivos) {
        printf( "Diferenca de %d a mais de números negativos que positivos.\n" , diferenca2);
    } else {
        printf("Há a mesma quantidade de números positivos e negativos.\n");
    }





return 0;
}

