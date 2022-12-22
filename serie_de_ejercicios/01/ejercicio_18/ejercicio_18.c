/*
    18.- OBTENER EL VOLUMEN DE UNA ESFERA
    
    Variables de entrada: radio.
    Variables de salida: volumen.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float radio, volumen;
    
    printf("\t VOLUMEN DE UNA ESFERA\n");
    
    printf("Ingresa el radio: ");
    scanf("%f", &radio);
    
    volumen = (pow(radio,3))*(3.1416)*(4/3);
    
    printf("El volumend de la esfera es: %.2f [u^3`]", volumen);
}
