
#include <stdio.h>

int main()
{
    int vetor [10];
    int soma = 0;
    int acima_da_media = 0;
    float media;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do %d termo:", i+1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    media = (float)soma/10;
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            acima_da_media++;
        }
    }
    
    printf("Média: %.2f\n", media);
    printf("Elementos acima da média:%d\n", acima_da_media);

    return 0;
}