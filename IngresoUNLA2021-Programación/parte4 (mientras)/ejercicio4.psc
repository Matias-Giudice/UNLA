Algoritmo ejercicio4
	Definir n, cant_divisores, i Como Entero;;
	Escribir "Ingrese un n�mero: ";
	Leer n;
	Si n<=0 Entonces
		Escribir "El n�mero debe ser mayor que 0.";
	SiNo
		cant_divisores<-0;
		i<-2;
		Mientras i<n Hacer
			Si n MOD i=0 Entonces
				cant_divisores<-cant_divisores + 1;
			FinSi
			i<-i +1;
		Fin Mientras
		Si cant_divisores=0 Y n>1 Entonces
			Escribir "El n�mero ", n, " es primo.";
		SiNo
			Escribir "El n�mero ", n, " es compuesto.";
		FinSi
	Fin Si
FinAlgoritmo
