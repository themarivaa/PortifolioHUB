#include <stdio.h>



int main() {
    int a;
    int b;
    int x;
    int y;
    int temp;
    int mdc;
    int mmc;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    mdc = a;
    mmc = (x * y) / mdc;

    printf("MDC: %d\nMMC: %d\n", mdc, mmc);



return 0;
}
