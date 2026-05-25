#include <stdio.h>

int main() {
    int n, objetivo, contador = 0;
    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &objetivo);
    
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == objetivo) {
            contador++;
        }
    }
    
    printf("El numero %d aparece %d vez/veces.\n", objetivo, contador);
    return 0;
}
