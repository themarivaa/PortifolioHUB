#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    int proximo;
    int i = 1;

    printf("Quantos termos da sequência de Fibonacci? ");
    scanf("%d", &n);

    for (i <= n; i) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");
    return 0;
}
