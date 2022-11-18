/*
    8.- Obtener el perímetro de un paralelogramo

    Variable de entrada: la, lb
    Variable de salida: p
    Operadores: Multiplicación y suma

    Proceso perimetro_de_un_paralelogramo
        Definir la, lb y p como real
        Escribir "Ingrese el valor de la"
        Leer la
        Escribir el valor de lb
        Leer lb
        p <- (2 * la) + (2 * lb)
        Escribir p
    Fin proceso
*/
#include <stdio.h>

int main()
{
    printf("\t  PERÍMETRO DE UN PARALELOGRAMO \n");
    float la, lb, p;

    
    printf("Dame el valor de los lados horizontales: ");
    scanf("%f", &la);
    while (la < 0)
    {
        printf("No existen longitudes negativas, ingrese otro valor: \n");
        scanf("%f", &la);
    }
    

    printf("Dame el valor de los lados verticales: ");
    scanf("%f", &lb);

    while (lb < 0)
    {
        printf("No existen longitudes negativas, ingrese otro valor: \n");
        scanf("%f", &lb);
    }

    p = (2 * la) + (2 * lb);
    printf("El perímetro del paralelogramo es de: %.2f \n", p);

    return 0;
}