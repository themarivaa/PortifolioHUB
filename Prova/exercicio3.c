#include<stdio.h>
#include<math.h>



int main() {
    float temp;
    float resultado;
    char unidade;

    printf("Qual a unidade da temperatura? (C Para Celsius, F para Fahrenheit): ");
    scanf(" %c", &unidade);


    if (unidade == 'C' || unidade == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        resultado = (temp * 9/5) + 32;
        printf("A temperatura em Fahrenheit é: %.2f\n", resultado);


    } else if (unidade == 'F' || unidade == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        resultado = (temp - 32) * 5/9;
        printf("A temperatura em Celsius é: %.2f\n", resultado);
    }

return 0;
}

