/*
    19.- OBTENER EL VOLUMEN DE UN CONO
    
    Variables de entrada: radio, altura.
    Variables de salida: volumen.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float radio, altura, volumen;
    
    printf("\tVOLUMEN DE U CONO\n");
    
    printf("Ingresa el radio: ");
    scanf("%f", &radio);
    
    printf("Ingresa la altura: ");
    scanf("%f", &altura);
    
    volumen = (3.1416) * (pow(radio,2)) * (altura) * (0.33333333); // 1/3 no sirve en el compilador online
    printf("El volumen es: %.2f [u^3]", volumen);
}
