#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero,i;
    int x[5] = {1,2,3,4,5};
    puntero = x;
    *x = 11;
    *(puntero+3) = 9;
    for(i=0; i<5; i++){
        printf("%d", x[i]);
    }
    return 0;
    //En el ejercicio 10 imprime 112395, ya que el numero 11 se guarda en la primera posici�n del vector, en este caso se cambia por el 1 que esta en la posici�n 0 y el valor 9 se cambia en la posici�n 3, en este caso se cambia por el 4 que esta en la posici�n 3.


}
