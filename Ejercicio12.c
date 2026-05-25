#include <stdio.h>

int main() {
    int N;
    long long producto = 1;
    
    printf("Ingrese N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        producto *= i;
    }
    
    printf("El producto de los primeros %d numeros es: %lld\n", N, producto);
    return 0;
}
 
