/*
    2.- Obtener la suma de dos variables

    Variables de entrada: a,b
    variable de salida: s
    operadores: suma

    proceso suma_2_variables
        Definir a, b, s como real
        Escribir "Ingrese el valor de a, b"
        Leer a, b
        s <- a+b
        Escribir s
    FinProceso
*/

#include <stdio.h>

int main()
{
    float a, b, s;
    printf("Ingrese el valor de a, b\n");
    scanf("%f %f", &a, &b);
    s = a+b;
    printf("%f", s);

    return 0;
}
