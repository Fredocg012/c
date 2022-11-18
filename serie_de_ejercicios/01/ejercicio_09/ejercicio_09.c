/*
    9.- Obtener la divvisión de dos variables

    Variables de entrada: a, b;
    Variables de salida: d
    Operadores: división

    Proceso division_2_variables
        Definir a, b, d Como real
        Escribir "Ingrese el valor de a, b"
        Leer a,b
        d <- a/b
        mostrar d
*/
#include <stdio.h>

int main()
{
    printf("\t OBTENER LA DIVISIÓN DE DOS VARIABLES \n");
    float a, b, d;
    printf("Ingrese el valor del numerador: ");
    scanf("%f", &a);

    printf("Ingresa el valor del denominador: ");
    scanf("%f", &b);

    while (b == 0)
    {
        printf("Indeterminado, ingresa un valor diferente a 0: ");
        scanf("%f", &b);
    }

    d = a/b;
    printf("La división es: %.2f \n", d);
    

    return 0;
}