#include <stdio.h>

int existeTriangulo (int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int a, b, c;
    
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B:");
    scanf("%d", &b);
    printf("Digite o valor de C:");
    scanf("%d", &c);
    
    if (a<=0 || b<=0 ||c<=0) {
        printf("Erro\n");
        return 1;
    }
    
    int resultado = existeTriangulo(a, b, c);
    
    if (resultado == 1) {
        printf("Os valores podem formar triangulo.");
    } else {
        printf("O valores não podem formar triangulo.");
    }

    return 0;
}
