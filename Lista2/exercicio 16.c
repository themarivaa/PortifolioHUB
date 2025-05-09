#include <stdio.h>
#include <math.h>

int main() {
    float capital;
    float taxa;
    int meses;
    int i = 1;

    printf("Valor presente: ");
    scanf("%f", &capital);


    printf("Taxa de juros mensal (em %%): ");
    scanf("%f", &taxa);


    printf("Número de meses: ");
    scanf("%d", &meses);

    taxa /= 100;

    for (i = 1; i <= meses; i) {
        float montante = capital * pow(1 + taxa, i);
        printf("Mês %d: R$%.2f\n", i, montante);
    }









return 0;
}
