/*
	Leer dos valores numéricos a y b e imprimir solamente el menor.
	
	Variables de entrada: a, b.
	Variables de saliad: Menor (a ó b)
	Operadores: Condición.
*/

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
	printf("\t LEER DOS VARIABLES NUMÉRICOS A Y B E IMPRIMIR SOLAMENTE EL MENOR\n");
	
	float a, b;
	printf("Dame dos números \n");
	scanf("%f %f", &a, &b);
	
	if(a > b)
	{
	    printf("El menor es: %.2f", b);
	}
	
	if(a < b)
	{
	    printf("El menor es: %.2f", a);
	}
	
	if(a == b)
	{
	    printf("Los dos números son iguales");
	}


return 0;
}
