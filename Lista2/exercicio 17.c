#include <stdio.h>
#include <math.h>

int main() {
    float deposito, taxa, montante = 0, juros;
    int meses;

    printf("Valor depositado mensalmente: ");
    scanf("%f", &deposito);
    printf("Taxa de juros mensal (em %%): ");
    scanf("%f", &taxa);
    printf("Total de meses: ");
    scanf("%d", &meses);

    taxa /= 100;

    for (int i = 1; i <= meses; i++) {
        montante = (montante + deposito) * (1 + taxa);
        juros = montante - deposito * i;
        printf("Mês %d: Montante: R$%.2f | Juros: R$%.2f\n", i, montante, juros);
    }

    return 0;
}
