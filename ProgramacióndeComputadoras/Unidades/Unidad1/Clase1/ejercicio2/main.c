#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definimos las variables a y b
    int a, b, division=0;

    //Asignamos valores a las variables a y b
    printf("Ingrese valor de a: \n");
    scanf("%d", &a);

    printf("Ingrese valor de b: \n");
    scanf("%d", &b);

    //Operaci�n
    division = a / b;

    //Resultado
    printf("El resultado es: %d \n", division);

    return 0;
}
