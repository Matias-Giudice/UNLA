Algoritmo ejercicio2
	Definir anio Como Entero;
	Escribir "Ingrese a�o:";
	Leer anio;
	
	Si (anio MOD 4 == 0) Entonces
		Si (anio MOD 100 == 0) Entonces
			Si (anio MOD 400 == 0) Entonces
				Escribir "El a�o ", anio, " es bisiesto";
			SiNo
				Escribir "El a�o ", anio, " no es bisiesto";
			FinSi
		SiNo
			Escribir "El a�o ", anio, " es bisiesto";
		FinSi
	SiNo
		Escribir "El a�o ", anio, " no es bisiesto";
	Fin Si
FinAlgoritmo