#include <stdio.h>

int main() {
    float num1, num2;
    printf("Ingrese dos numeros: ");
    scanf("%f %f", &num1, &num2);
    
    printf("Suma: %.2f\n", num1 + num2);
    printf("Resta: %.2f\n", num1 - num2);
    printf("Multiplicacion: %.2f\n", num1 * num2);
    return 0;
}
