#include<stdio.h>
#include<math.h>



int main() {
     int n;


    printf("Digite um número maior que 5: ");
    scanf("%d", &n);
    if (n <= 5) {
        printf("Número inválido. O número deve ser maior que 5.\n");
        }

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++)

        if (y == n - 2 ||                   //Coluna Direita
            (x == n - 1 && y <= n - 2) ||   //Base da Letra
            (x >= n / 2 && y == 0)) {     //Curva Esquerda
            printf("x");
        } else {
            printf(" ");

        }
        printf("\n");
    }
return 0;}
