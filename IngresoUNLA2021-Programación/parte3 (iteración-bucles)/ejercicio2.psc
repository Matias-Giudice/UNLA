Algoritmo ejercicio2 
	Definir a, b, po, c Como Entero;
	Escribir "ingrese la base";
	Leer a;
	Escribir "ingrese la potencia";
	Leer b;
	po<-1;
	c<-1;
	
    Mientras c<=b Hacer //se repite mientas la condici�n se verdadera 
        po<-po*a;
        c<-c+1; //Se aumenta en 1 m�s cada vez que se repite la condici�n 
    Fin Mientras //finaliza el ciclo
    Escribir a,"^",b,"=",po;
FinAlgoritmo