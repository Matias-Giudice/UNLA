Algoritmo ejercicio1
	Definir numeroSecreto, maximoIntentos, numeroUsuario, intentos Como Entero;
	numeroSecreto<-26;
	maximoIntentos<-30;
	Escribir "Adivina el n�mero que estoy pensando en ", maximoIntentos, " intentos o menos...";
	Escribir "Qu� n�mero te parece que es? ";
	Leer numeroUsuario;
	intentos<-1;
	Mientras numeroUsuario != numeroSecreto Y intentos < maximoIntentos Hacer
		Si numeroUsuario > numeroSecreto Entonces
			Escribir numeroUsuario, " es mayor que el n�mero que pens�.";
		SiNo
			Escribir numeroUsuario, " es menor que el n�mero que pens�.";
		Fin Si
		Escribir "Prob� de nuevo! Te quedan ", maximoIntentos-intentos, " intentos.";
		Leer numeroUsuario;
		intentos<-intentos + 1;
	Fin Mientras
	Si intentos = maximoIntentos Entonces
		Escribir "Perdiste! no adivinaste en ", maximoIntentos, " intentos o menos.";
	SiNo
		Escribir "Adivinaste en ", intentos, " intentos!";
	Fin Si
	Escribir "El n�mero que pens� es: ", numeroSecreto;;
FinAlgoritmo
