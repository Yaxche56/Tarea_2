#include <stdio.h>

int main() {
    float inversion, tasa_mensual, monto_final;
    printf("Ingrese la cantidad invertida: ");
    scanf("%f", &inversion);
    printf("Ingrese la tasa de interes mensual (en porcentaje, ej. 5 para 5%%): ");
    scanf("%f", &tasa_mensual);
    
    monto_final = inversion + (inversion * (tasa_mensual / 100));
    printf("Monto al finalizar el mes: %.2f\n", monto_final);
    return 0;
}
