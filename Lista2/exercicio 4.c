#include <stdio.h>

int main() {
    float orcamento;
    float servico;
    float soma = 0;

     {
        printf("Digite o valor total do orçamento: ");
        scanf("%f", &orcamento);

    } while (orcamento < 100);

    while  (){
        printf("Digite o valor do serviço: ");
        scanf("%f", &servico);

        if (soma + servico > orcamento) {
            printf("Orçamento estourado! Nenhum outro serviço pode ser adicionado.\n");
            break;
        }



        soma += servico;
        printf("Serviço adicionado. Total utilizado: R$%.2f\n", soma);
    }









return 0;
}
