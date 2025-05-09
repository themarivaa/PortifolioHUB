#include <stdio.h>

int main() {
    float nota;



     {

        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0 , nota > 10)
            printf("Nota inválida. Tente novamente.\n");



    } while (nota < 0 , nota > 10);
    printf("Nota válida: %.1f\n", nota);





return 0;


}
