/*
    4.- Obtener un valor de la función z = x^2 + y^3

    Variables de entrada: x, y1
    Variable de salida: z
    Operadores: suma y potencia

    Proceso suma_función
        definir z, x, y1 como reales
        Escribir "Ingrese x y y1"
        leer x, y1
        x  <- X^2
        y1 <- y1^3
        z <- x + y1
        mostrar z
    Fin de proceso

    Nota: En ubuntu agrerar la bandera -lm para asociar la biblioteca math.h
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float z, x, y1;
    printf("Ingrese x y y1 \n");
    scanf("%f %f", &x, &y1);
    x  = pow(x, 2);
    y1 = pow(y1, 3);
    z = x + y1;
    printf("%f \n", z);

    return 0;
}
