#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [10][10];
    
    printf("Digite os elementos da Matriz:\n");
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("Elemento [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Diagonal principal:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d", matriz[i][i]);
    }
    printf("\n");
    
    printf("Diagonal secundária:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d", matriz[i][9 - i]);
    }
    printf("\n");
    

    return 0;
}