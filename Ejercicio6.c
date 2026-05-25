#include <stdio.h>

int main() {
    float sueldo;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    if (sueldo < 1000) {
        sueldo = sueldo * 1.15;
    } else {
        sueldo = sueldo * 1.12;
    }
    
    printf("Sueldo con aumento: $%.2f\n", sueldo);
    return 0;
}
 
