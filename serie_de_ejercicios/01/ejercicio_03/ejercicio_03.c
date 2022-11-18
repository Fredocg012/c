/*
    3.- Obtener el cuadrado y el cubo de una variable x

    Variable de entrada: x
    Variables de salida: r, s
    Operadores: potencia

    Proceso cuadrado_y_cubo
        Definir r, x, s como real
        Escribir "Ingrese x"
        Leer x
        r <- x^2
            s <- x^3
        Escribir "El resultado es: r"
        Escribir "El resultado es: s"
    FinProceso

    Nota:

    Para compilar en Ubuntu y enlazar la biblioteca math.h
    se le tiene que agregar la bandera: -lm

    ejemplo:
    gcc ejercicio_03 -o ejercicio_03.out -lm 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float r, x, s;
    printf("Ingrese x\n");
    scanf("%f", &x);
    r = pow(x,2);
    s = pow(x,3);
    printf("El resultado es: %f \n", r);
    printf("El resultado es: %f \n", s);

}