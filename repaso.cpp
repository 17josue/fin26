#include <stdio.h>

int main() {
    int edad, meses, dias;
    
    printf("Ingresa tu edad en años: ");
    scanf("%d", &edad);
    
    printf("Ingresa los meses adicionales: ");
    scanf("%d", &meses);
    
    printf("Ingresa los dias adicionales: ");
    scanf("%d", &dias);
    
    printf("Edad %d años, meses %d, dias %d\n", edad, meses, dias);
    
    return 0;
}
