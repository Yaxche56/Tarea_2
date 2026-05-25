#include <stdio.h>

#define PI 3.14159265

int main() {
    float radio, area, circunferencia;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;
    
    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);
    return 0;
}
