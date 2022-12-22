/*
    14.- OBTENER EL ÁREA DE UN TRIÁNGULO
    
    Variables de entrada: b, h.
    Variables de salida: a
    Operadores: Multiplicación, división.

*/
#include <stdio.h>

int main()
{
    float base, altura, area;
    
    printf("\tOBTENER EL ÁREA DE UN TRIÁNGULO \n");
    
    printf("Ingresa el valor de la altura: \n");
    scanf("%f", &altura);
    
    printf("Ingresa el valor de la base: \n");
    scanf("%f", &base);
    
    area = (base * altura) / 2;
    printf("El área es: %.2f [u^2]", area);
    return 0;
}


