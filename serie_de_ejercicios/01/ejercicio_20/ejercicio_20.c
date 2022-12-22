/*
    20.- OBTENER EL VOLUMEN DE UN PRISMA RECTO
    
    Variables de entrada: lado_1, lado_2, lado_3.
    Variable de salida: volumen.
    Operador: Multiplicación.
    
*/

#include <stdio.h>

int main()
{
    float lado_1, lado_2, lado_3, volumen;
    printf("\tVOLUMEN DE UN PRISMA RECTANGULAR\n");
    
    printf("Ingresa el lado 1: ");
    scanf("%f", &lado_1);
    
    printf("Ingresa el lado 2: ");
    scanf("%f", &lado_2);
    
    printf("Ingresa el lado 3: ");
    scanf("%f", &lado_3);
    
    volumen = lado_1 * lado_2 * lado_3;
    
    printf("El volumen es: %.2f [u^3]", volumen);
}