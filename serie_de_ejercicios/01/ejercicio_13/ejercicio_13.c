/*
    13.- OBTENER EL ÁREA DE UN CÍRCULO.
    
    Variable de entrada: r
    Variable de salida: a
*/

#include <stdio.h>

int main()
{
    printf("\t OBTENER EL ÁREA DE UN CÍRCULO \n");
    
    float r, a;
    
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &r);
    a = (3.1416) * (r * r);
    
    printf("El área es: %.2f \n",a);
    
    return 0;
}