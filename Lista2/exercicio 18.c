#include <stdio.h>
#include <math.h>



// Quest�o com aux�lio do ChatGPT


int main() {
    int n;
    float nota;
    float soma;
    float media;
    float desvio;
    int i = 0;

    printf("N�mero de provas: ");
    scanf("%d", &n);

    float notas[n];


    for (i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }




    media = soma / n;

    for (int i = 0; i < n; i++) {
        desvio += pow(notas[i] - media, 2);
    }



    desvio = sqrt(desvio / n);


    printf("M�dia: %.2f\nDesvio padr�o: %.2f\n", media, desvio);




return 0;
}
