/*
    7.- Obtener el perímetro de un cuadrado

    Variable de entrada: l
    Variable de salida: p
    Operadores: multiplicación

    proceso perimetro_de_un_cuadrado
        Definir l, p como real
        Ecribir "Ingrese el valor de l"
        Leer l
        p <- l * 4
        Escribir
    FinProceso    
*/
#include <stdio.h>

int main()
{
    float l, p;
    printf("\t PERÍMETRO DE UN CUADRADO \n");
    printf("Ingrese la longitud de un lado: ");
    scanf("%f", &l);

    while (l < 0)
    {
        printf("No existen longitudes negativas, ingrese otra: ");
        scanf("%f",&l);
    }

    p = l * 4;

    printf("El perímetro del cuadrado es de: %.2f \n", l);
    
    

    return 0;
}