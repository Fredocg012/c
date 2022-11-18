/*
    6.- Obtener el perímetro de un triángulo

    Variable de entrada: I
    Variable de salida: p
    Operadores: multiplicación

    Proceso perimetro_del_triangulo
        Definir p, l como reales
        Escribir "Introduce el valor de l"
        Leer I
        p <- l * 3
        Mostrar p
    FinProceso  

*/
#include <stdio.h>

int main()
{
    float p, l;

    printf("\t#####PERÍMETRO DE UN TRIÁNGULO EQUILÁTERO#####\n");
    printf("Introduce el valor de un lado del triángulo equilátero: ");
    scanf("%f", &l);

    
    while (l < 0)
    {
        printf("No existen longitude negativas, introcuce otra: ");
        scanf("%f", &l);
    }

    p = 3 * l;

    printf("El perímetro del triángulo es: %.2f \n", p);

    
        
    
        
   return 0; 
}
