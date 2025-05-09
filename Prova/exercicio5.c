#include<stdio.h>
#include<math.h>


int main() {
    int m;
    int n;
    int a;
    int b;
    int resto;
    int mmc;
    int mdc;
    int max;
    int divisor;

    printf("Digite dois números inteiros positivos (m e n): ");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);


    if (m > n) {
        max = m;
    } else {
        max = n;
    }

    mmc = max;



    while (a != 1 || b != 1) {
        if (a % divisor == 0 || b % divisor == 0) {
            printf("%d %d | %d\n", a, b, divisor);
            if (a % divisor == 0) a /= divisor;
            if (b % divisor == 0) b /= divisor;
            mmc *= divisor;
        } else {
            divisor++;
        }
    }

    printf("1 1\n");

    int mdc = (m * n) / mmc;

    printf("O MMC de %d e %d é: %d\n", m, n, mmc);
    printf("O MDC de %d e %d é: %d\n", m, n, mdc);

    return 0;
}
