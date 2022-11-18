/*
    1.- Obtener la suma de dos constantes de tipo numérico

    Variables de entrada: num1, num2
    Variables de salida: s
    Operadores: s

    proceso suma_2_constantes
        Definir num1, num2, s como entero
        Escribir "ingrese valores a sumar"
        leer num1, num2
        s <- num1 + num2
        mostrar s
    FinProceso
*/

#include <stdio.h>

int main()
{
    int num1, num2, s;
    printf("ingrese valores a sumar\n");
    scanf("%d %d", &num1, &num2);
    s = num1 + num2;
    printf("%d\n", s);

    return 0;
}