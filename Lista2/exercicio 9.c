#include <stdio.h>

// Quest�o com aux�lio do ChatGPT


int main() {
    int n;
    int i;
    int eh_primo = 1;


    printf("Digite um n�mero inteiro: ");
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
        printf("%d � primo.\n", n);
    else
        printf("%d n�o � primo.\n", n);

    return 0;
}
