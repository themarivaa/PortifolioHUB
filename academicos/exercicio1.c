#include<stdio.h>



int main() {
    int anoNascimento;
    int idade;
    int ano50;


    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);


    idade = 2025 - anoNascimento;


    ano50 = anoNascimento + 50;


    printf("Idade em 2025: %d\n", idade);
    if (ano50 > 2025) {
        printf("Ano que fará 50 anos: %d\n", ano50);
    } else {
        printf("Ano que fez 50 anos: %d\n", ano50);

    };



return 0;
}
