#include <stdio.h>

// Questão com auxílio do ChatGPT


int main() {
    int n;
    int i;
    int eh_primo = 1;


    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 2) {
        eh_primo = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                eh_primo = 0;

            }
        }
    }

    if (eh_primo)
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);

    return 0;
}
