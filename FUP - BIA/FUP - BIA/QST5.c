#include <stdio.h>

int incrementa (int *x) {
    *x = *x + 1;
}

int main()
{
    int x = 10;
    
    printf("Valor orignial: %d\n", x);
    
    incrementa(&x);
    
    printf("Valor após o incremento: %d\n", x);

    return 0;
}
