#include <stdio.h>

int main() {
    int razao;
    int quarto;
    int n;
    int primeiro;
    int soma = 0;
    int i = 0;

    printf("Digite o quarto termo da PA: ");
    scanf("%d", &quarto);


    printf("Digite a razão: ");
    scanf("%d", &razao);


    printf("Quantos termos deseja somar? ");
    scanf("%d", &n);

primeiro = quarto - 3 * razao;
for (i = 0; i < n; i) {
        soma += primeiro + i * razao;
    }


    printf("Soma dos %d primeiros termos da PA: %d\n", n, soma);



return 0;
}
