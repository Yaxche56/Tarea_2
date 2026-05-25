#include <stdio.h>

int main() {
    float dolares, pesos;
    printf("Ingrese la cantidad en dolares: ");
    scanf("%f", &dolares);
    
    pesos = dolares * 17.2548;
    printf("Equivalente en pesos: %.2f\n", pesos);
    return 0;
}
 
