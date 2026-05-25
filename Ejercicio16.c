#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        
        if (arreglo[i] > 0) positivos++;
        else if (arreglo[i] < 0) negativos++;
        else nulos++;
    }
    
    printf("Positivos: %d\nNegativos: %d\nNulos: %d\n", positivos, negativos, nulos);
    return 0;
}
