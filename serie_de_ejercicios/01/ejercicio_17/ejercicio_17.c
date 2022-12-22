/*
    17.- OBTENER EL VOLUMENDE UN CILINDRO.
    
    Variables de entrada: radio, altura.
    Variables de salida: volumen.
    Operadores: multiplicación.
*/

#include <stdio.h>

int main()
{
    float radio, altura, volumen;
    
    printf("\tOBTENER EL VOLUMEN DE UN CILINDRO \n");
    
    printf("Ingreas la altura: ");
    scanf("%f", &altura);
    
    printf("Ingresa el valor del radio: ");
    scanf("%f", &radio);
    
    volumen = altura * ((3.1416 * (radio * radio)));
    printf("El volumen es: %.2f [u^3]", volumen);
    return 0;
}