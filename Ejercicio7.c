#include <stdio.h>

int main() {
    float distancia_ida, distancia_total, precio_km = 0.23, costo_ticket;
    int dias_estancia;
    
    printf("Ingrese la distancia de ida (en km): ");
    scanf("%f", &distancia_ida);
    printf("Ingrese el numero de dias de estancia: ");
    scanf("%d", &dias_estancia);
    
    distancia_total = distancia_ida * 2;
    costo_ticket = distancia_total * precio_km;
    
    if (dias_estancia > 7 && distancia_total > 800) {
        costo_ticket = costo_ticket * 0.70;
    }
    
    printf("El precio del ticket ida y vuelta es: $%.2f\n", costo_ticket);
    return 0;
}
