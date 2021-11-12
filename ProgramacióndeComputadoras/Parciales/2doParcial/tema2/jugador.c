#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"
#define CINCOMILLONES 5000000

Jugador crearJugador(char nombreJugador[30], int golesJugador, int edadJugador, float habilidadJugador){
    Jugador j = malloc(sizeof(struct estructuraJugador));

    strcpy(j->nombre, nombreJugador);
    j->goles = golesJugador;
    j->edad = edadJugador;
    j->habilidad = habilidadJugador;
    setValor(j);

    return j;
}

void destruirJugador(Jugador j){
    free(j);
}

void mostrarJugadores(Jugador j[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("\n--------------JUGADOR----------\n");
        printf("    NOMBRE: %s \n    EDAD: %d \n    GOLES: %d \n    HABILIDAD: %.2f \n    VALOR: US$ %.2f \n",j[i]->nombre, j[i]->edad, j[i]->goles, j[i]->habilidad, j[i]->valor);
    }
}

char *getNombre(Jugador j){
    return j->nombre;
}
int getGoles(Jugador j){
    return j->goles;
}
int getEdad(Jugador j){
    return j->edad;
}
float getHabilidad(Jugador j){
    return j->habilidad;
}
float getValor(Jugador j){
    return j->valor;
}

void setNombre(Jugador j, int nuevoNombre[30]){
    strcpy(j->nombre, nuevoNombre);
}
void setGoles(Jugador j, int nuevosGoles){
    j->goles = nuevosGoles;
}
void setEdad(Jugador j, int nuevaEdad){
    j->edad = nuevaEdad;
}
void setHabilidad(Jugador j, int nuevaHabilidad){
    j->habilidad = nuevaHabilidad;
}
void setValor(Jugador j){
    j->valor = CINCOMILLONES*j->habilidad*(25/(float)j->edad)+1500*(j->goles);
}

void ordenarJugadores(Jugador plantel[], int tam){
    Jugador aux;
    int i;
    for(i=0; i<tam; i++){
        int j;
        for(j=0; j<tam-1; j++){
            if(getValor(plantel[j]) > getValor(plantel[j+1])){
                aux = plantel[j];
                plantel[j] = plantel[j+1];
                plantel[j+1] = aux;
            }
        }
    }
}
