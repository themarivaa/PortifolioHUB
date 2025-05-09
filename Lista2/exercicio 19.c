#include <stdio.h>

// Quest�o com aux�lio do ChatGPT


int main() {
    int n;
    int binario[32];
    int i = 0;


    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Bin�rio: 0\n");
        return 0;
    }


    while (n > 0) {
        binario[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Bin�rio: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }


printf("\n");




return 0;
}
