Algoritmo ejercicio2
	Definir numeroUsuario, numeroAleatorio, numeroGuardado Como Entero;
	Escribir "Ingrese un n�mero del 1 al 20.";
	Leer numeroUsuario;
	numeroAleatorio<-Aleatorio(1,20);
	numeroGuardado<-1;
	Mientras numeroUsuario != numeroAleatorio Hacer
		numeroGuardado<- numeroGuardado + 1;
		Escribir "Prob� de nuevo! ";
		Leer numeroUsuario;
	Fin Mientras
	Escribir "Se escribieron ", numeroGuardado, " n�meros. ";
	Escribir "Sali� el n�mero ingresado. ";
	Escribir numeroUsuario ," = ", numeroAleatorio;
FinAlgoritmo
