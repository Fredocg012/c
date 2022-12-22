/*
    15.- OBTENER EL ÁREA DE UN CUADRADO
    
    Variables de entrada: lado
    Variablesd de salida: area
    operaciones: multiplicación
*/
#include <stdio.h>

int main()
{
    float lado, area;
    
    printf("\t OBTENER EL ÁREA DE UN CUADRADO \n");
    
    printf("Ingresa la longitud de un lado: ");
    scanf("%f", &lado);
    
    area = lado * lado;
    printf("El área es: %.2f [u^2]", area);
    
    return 0;
}