#include<stdio.h>



int main() {
    int num;
    int positivos = 0;
    int negativos = 0;


    printf("Digite um n�mero inteiro (0 para acabar):\n");

    do {
        printf("N�mero: ");
        scanf("%d", &num);

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        }
    } while (num != 0);



    printf("\nResultados:\n");
    printf("%d N�meros positivos \n", positivos);
    printf("%d N�meros negativos \n", negativos);



    int diferenca = positivos - negativos;
    int diferenca2 = negativos - positivos;



    if (positivos > negativos) {
        printf(  "Diferenca de %d a mais de n�meros positivos que negativos.\n" , diferenca);
    } else if (negativos > positivos) {
        printf( "Diferenca de %d a mais de n�meros negativos que positivos.\n" , diferenca2);
    } else {
        printf("H� a mesma quantidade de n�meros positivos e negativos.\n");
    }





return 0;
}

