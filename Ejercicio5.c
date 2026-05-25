#include <stdio.h>

int main() {
    float compra, total_pagar;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    
    if (compra > 2500) {
        total_pagar = compra - (compra * 0.08);
    } else {
        total_pagar = compra;
    }
    
    printf("Total a pagar: $%.2f\n", total_pagar);
    return 0;
}
