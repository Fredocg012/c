/*
    Leer un número Z e imprimir si es negativo o positivo

    Variables de entrada: z
    variables de salida: +, -

    Proceso ejercicio_10
        Escribir "Ingrese el valor de z"
        Leer z
        si z <> 0 Entonces      // Z diferente de 0
            Si z > 0 Entonces
                Escribir "+"
            SiNo
                Escribir "-"
            FinSi
        SiNo
            Escribir "Neutro"
        FinSi
    FinProceso
*/

#include <stdio.h>

int main()
{
    printf("\tSABER SI UN NÚMERO ES POSITIVO O NEGATIVO \n");
    float z;
    printf("Ingrese un número: ");
    scanf("%f", &z);

    if(z != 0)
    {
        if(z > 0)
        {
            printf("Tu número es positivo \n");
        }
        else
        {
            printf("Tu número es negativo\n");
        }
    }
    else
    {
        printf("Tu número es neutro \n");
    }

    return 0;
}