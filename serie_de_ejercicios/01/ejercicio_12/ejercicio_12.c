/*
    12.- SOLICITAR 3 VALORES NUMÉRICOS E INDICAR SI:
        SON IGUALES O HAY DOS IGUALES O LOS TRES SON DIFERENTES
        
        Variables de entrad: a, b, c.
        Variables de salida: 3 iguales, 2 diferentes, 3 diferenttes
*/

#include <stdio.h>

int main()
{
    printf("\t SOLICITAR 3 VALORES NUMÉRICOS E INDICAR SI: \n");
    printf("\t SON IGUALES O HAY DOS IGUALES O LOS TRES SON DIFERENTES \n");
    
    float a, b, c;
    printf ("Ingresa tres números: \n");
    scanf("%f %f %f", &a, &b, &c);
    
    if((a == b) & (a == c))
    {
        printf("Los tres son iguales. \n");
    }
    
    else
    {
        if((a == b) & (a != c))
        {
            printf("Dos son iguales. \n");
        }
        
        else
        {
            if((a != b & a == c))
            {
                printf("Dos son iguales. \n");
            }
            
            else
            {
                if((a != b) & (a!= c))
                {
                    printf("Los tres son diferentes. \n");
                }
            }
        }
    }
    
    
    return 0;
}