#include <stdio.h>

int main() {
    float orcamento;
    float servico;
    float soma = 0;

     {
        printf("Digite o valor total do or�amento: ");
        scanf("%f", &orcamento);

    } while (orcamento < 100);

    while  (){
        printf("Digite o valor do servi�o: ");
        scanf("%f", &servico);

        if (soma + servico > orcamento) {
            printf("Or�amento estourado! Nenhum outro servi�o pode ser adicionado.\n");
            break;
        }



        soma += servico;
        printf("Servi�o adicionado. Total utilizado: R$%.2f\n", soma);
    }









return 0;
}
