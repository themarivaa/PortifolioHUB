#include <stdio.h>


// Questão com auxílio do ChatGPT

int main() {
    int n;
    int fatorial = 1;
    int i = 1;


    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }



    printf("%d! = %d\n", n, fatorial);




return 0;
}
