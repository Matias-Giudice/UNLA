#include <stdio.h>
#include <stdlib.h>
//Mostrar todos los n�meros pares entre 15 y 50.
int main(){
    int i;
    for(i = 15; i <= 50; i++){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
    return 0;
}
