/*
    16.- OBTENER EL ÁREA DE UN PARALELOGRAMO.
    
    Variables de entrada: base, altura.
    Variables de salida: area.
    Operadores: multiplicacion.

*/
#include <stdio.h>

int main()
{
    float base, altura, area;
    
    printf("\t OBTENER EL ÁREA DE UN PARALELOGRAMO \n");
    
    printf("Ingresa el valor de la base: ");
    scanf("%f", &base);
    
    printf("Ingresa el valor de la altura: ");
    scanf("%f", &altura);
    
    area = base * altura;
    printf("El área es: %.2f [u^2]", area);
    
    return 0;
}