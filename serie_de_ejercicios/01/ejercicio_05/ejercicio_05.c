/*
    5.- Obtener el perímetro de un círculo

    Variable de entrada: d
    Variable de salida: x
    Operadores: multiplicación

    Proceso Perimetro_de_un_circulo
        Definir x, p, d como reales
        p <- 3.1416
        Escribe "Introduce el valor de d"
        Leer d
        x <- p*d
        Mostrar x
    FinProceso
*/

#include <stdio.h>

int main()
{
    float x, p, d;
    p = 3.1416;
    printf("Escribe el valor de d \n");
    scanf("%f", &d);
    x = p * d;
    printf("%f \n", x);
}