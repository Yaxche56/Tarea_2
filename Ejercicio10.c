#include <stdio.h>

int main() {
    int numero;
    int positivos = 0, negativos = 0, nulos = 0;
    
    printf("Ingrese 100 numeros naturales:\n");
    for (int i = 0; i < 100; i++) {
        scanf("%d", &numero);
        if (numero > 0) positivos++;
        else if (numero < 0) negativos++;
        else nulos++;
    }
    
    printf("Positivos: %d\nNegativos: %d\nNulos: %d\n", positivos, negativos, nulos);
    return 0;
}
