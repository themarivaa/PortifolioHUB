#include <stdio.h>

int main() {
    float nota;



     {

        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0 , nota > 10)
            printf("Nota inv�lida. Tente novamente.\n");



    } while (nota < 0 , nota > 10);
    printf("Nota v�lida: %.1f\n", nota);





return 0;


}
