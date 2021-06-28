#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>
#define cantHor 4
void mostrarMaxMinVectorTamanioDefinido();
void mostrarMaxMinPromAltParesVectorTamanioDefinido();
void mostrarMaxMinPosSumPromParImparVectorTamanioIndefinido();
void menu();
int submenu(int op, int v[], int t);
int cargarTamanio();
void cargarVectorAleatorio(int v[], int t);
void mostrarVector(int v[], int t);
int calcularMedia(int v[], int t);
void ordenamientoBurbuja(int v[], int t);
int calcularMediana(int v[], int t);
float calcularDesvioEstandar(int v[], int t, int media);
void calcularFrecuencia(int v[], int t, int n);
void eliminarNumRepetidos(int v[], int t, int n);
void mostrarFrecuencia(int v[], int t);
void menuVectores();
void cargarVector(int v[], int t);
void sumaVectores(int vA[], int vB[], int t);
void restaVectores(int vA[], int vB[], int t);
void multiVectores(int vA[], int vB[], int t);
void multiplicarVectorXunValor(int vA[], int t);
void mostrarOperacionesVectores(int vA[], int vB[], int t, int vS, int vR, int vM, int vMP);
void menuMatrices();
void cargarMatriz(int matriz[][cantHor], int cantVer);
void mostrarMatriz(int matriz[][cantHor], int cantVer);
void totalGanadoXCadaEmpresaalanio(int matriz[][cantHor], int cantVer, int sumarFilas);
void ganadoXMescontandoatodaslasempresas(int matriz[][cantHor], int cantVer, int sumarColumnas);
void totalGanadoportodaslasempresasjuntas(int matriz[][cantHor], int cantVer);
void empresaQueganomasYenquemes(int matriz[][cantHor], int cantVer);
void calcularPromGananciasCadaEmpresaXbimestresQuienGanoMasenCadaBimestre(int matriz[][cantHor], int cantVer, int sumarColumnas);
void menuMatricesDos();
void cargarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void mostrarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void sumaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void restaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void multiplicacionMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void menuVectoresMatrices();
int submenuVectoresMatrices(int op, int v[], int t, int matriz[][cantHor], int cantVerX);
int cargarRenglones();
int cargarColumnas();
void oracion();
int main(){
    srand(time(0));
    /*mostrarMaxMinVectorTamanioDefinido();
    mostrarMaxMinPromAltParesVectorTamanioDefinido();
    mostrarMaxMinPosSumPromParImparVectorTamanioIndefinido();
    menu();
    menuVectores();
    menuMatrices();
    menuMatricesDos();
    menuVectoresMatrices();*/
    //ME QUEDE EN CADENAS - CLASE 7 EJERCICIO 2
    oracion();
    return 0;
}
void mostrarMaxMinVectorTamanioDefinido(){
    int i,j,vector[5];
    for(i=0; i<5; i++){
        printf("Por favor ingrese el numero que desea guardar en la posicion %d\n",i);
        scanf("%d",&vector[i]);
    }
    int max = vector[0];
    int min = max;
    for(j=0; j<5; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
    }
    printf("\nEl maximo es: %d\n",max);
    printf("\nEl minimo es: %d\n",min);
    printf("\nArray de derecha a izquierda\n");
    for (i=5-1; i>=0; i--){
        printf("%d ",vector[i]);
    }
    printf("\n");
}
void mostrarMaxMinPromAltParesVectorTamanioDefinido(){
    int i,j;
    float vector[10],s=0,p=0;
    for(i=0; i<10; i++){
        printf("Por favor ingrese la altura que desea guardar en la posicion %d\n",i);
        scanf("%f",&vector[i]);
    }
    float max = vector[0];
    float min = max;
    for(j=0; j<10; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
        s = s + vector[j];
        p = ((float)s) / 10;
    }
    printf("\nEl maximo es: %.2f\n",max);
    printf("\nEl minimo es: %.2f\n",min);
    printf("\nEl promedio es: %.2f\n",p);
    printf("\nAlturas en las posicione pares: %.2f %.2f %.2f %.2f %.2f %.2f",vector[0],vector[2],vector[4],vector[6],vector[8],vector[10]);
}
void mostrarMaxMinPosSumPromParImparVectorTamanioIndefinido(){
    int tamanio,i,j,sP=0,sI=0,cI=0,p=0,posMa=0,posMe=0;
    printf("Ingrese la cantidad de posiciones del vector: \n");
    scanf("%d",&tamanio);

    int vector[tamanio];

    for (i=0; i<tamanio; i++){
        printf ("Ingrese un numero entero: \n");
        scanf ("%d",&vector[i]);
        if(vector[i]%2==0){
            sP=sP+vector[i];
        }else{
            cI=cI+1;
            sI=sI+vector[i];
            p=sI/cI;
        }
    }

    int maximo = vector[0];
    int minimo = vector[0];
    int cont=0,cont2=0;

    for (i = 0;i<tamanio;i++){
        cont=cont+1;
        if (maximo < vector[i]){
            maximo = vector[i];
            posMa = cont - 1;
        }
    }
    for (i = 0;i<tamanio;i++){
        cont2 = cont2 + 1;
        if (minimo > vector[i]){
            minimo = vector[i];
            posMe = cont2 - 1;
        }
    }

    printf("La suma de los numeros pares es: %d \n",sP);
    printf("El promedio de los impares es: %d \n",p);
    printf("El valor maximo es %d y su posicion es: %d \n",maximo,posMa);
    printf("El valor minimo es %d y su posicion es: %d \n",minimo,posMe);

    printf("\nArray de derecha a izquierda\n");
    for (i = tamanio-1;i>=0;i--){
        printf("%d ",vector[i]);
    }
    printf("\n");
    printf("Array de izquierda a derecha\n");
    for (i = 0;i<tamanio;i++){
        printf("%d ",vector[i]);
    }
    printf("\n");
}
void menu(){
    int opcion;
    printf("Primero antes de entrar al menu, cargar tamanio del vector y cargar el vector.\n");
    int tam = cargarTamanio();
    int vector[tam];
    cargarVectorAleatorio(vector,tam);
    do{
        printf("########MENU########\n");
        printf("1- Mostrar vector.\n");
        printf("2- Ordenar vector.\n");
        printf("3- Mostrar media del vector.\n");
        printf("4- Mostrar mediana del vector.\n");
        printf("5- Mostrar desviacion estandar del vector.\n");
        printf("6- Mostrar frecuencia del vector.\n");
        printf("7- Para salir.\n");
        printf("Elija una opcion: \n");
        scanf("%d",&opcion);
        submenu(opcion,vector,tam);
    }while(opcion!=7 && opcion>0 && opcion<7);
}
int submenu(int op, int v[], int t){
    int media,mediana;
    float desvio;
    switch(op){
        case 1:
            mostrarVector(v,t);
            break;
        case 2:
            printf("\nOrdenamiento burbuja: \n");
            ordenamientoBurbuja(v,t);
            mostrarVector(v,t);
            break;
        case 3:
            media = calcularMedia(v,t);
            printf("\nMEDIA: %d\n",media);
            break;
        case 4:
            mediana = calcularMediana(v,t);
            printf("\nMEDIANA: %d\n",mediana);
            break;
        case 5:
            desvio = calcularDesvioEstandar(v,t,media);
            printf("\nDESVIACION ESTANDAR: %f\n",desvio);
            break;
        case 6:
            mostrarFrecuencia(v,t);
            break;
    }
}
int cargarTamanio(){
    int tamanio;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    return tamanio;
}
void cargarVectorAleatorio(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = rand() % 11;
    }
}
void mostrarVector(int v[], int t){
    int i;
    printf("Vector[ ");
    for(i=0; i<t; i++){
        printf(" %d ",v[i]);
    }
    printf(" ]\n");
}
int calcularMedia(int v[], int t){
    int i,s=0,m=0;
    for(i=0; i<t; i++){
        s = s + v[i];
    }
    m = s / t;
    return m;
}
void ordenamientoBurbuja(int v[], int t){
    int i,j,aux;
    for(i=0; i<t; i++){
        for(j=0; j<t-1; j++){
            if(v[j] >= v[j+1]) {
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}
int calcularMediana(int v[], int t){
    int med=0;
    if(t%2==0){
        med = (v[t/2]+v[t/2-1])/2;
    }else{
        med = v[t/2];
    }
    return med;
}
float calcularDesvioEstandar(int v[], int t, int media){
    int i,aux=0;
    float desvi;
    for(i=0; i<t; i++){
        aux = aux + pow(v[i]-media,2);
    }
    aux = aux / t;
    desvi = sqrt(aux);
    return desvi;
}
void calcularFrecuencia(int v[], int t, int n){
    int i,l,x = 0;
    for(i=0; i<t; i++){
        if(n == v[i]){
            x++;
            l = v[i];
        }
    }
    printf("Frecuencia del %d es %d / %d.\n",l,x,t);
}
void eliminarNumRepetidos(int v[], int t, int n){
    int i;
    for(i=0; i<t; i++){
        if(n == v[i]){
            v[i] = 0;
        }
    }
}
void mostrarFrecuencia(int v[], int t){
    int i,n;
    for(i=0; i<t; i++){
        n = v[i];
        if(n != 0){
            calcularFrecuencia(v,t,n);
            eliminarNumRepetidos(v,t,n);
        }
    }
}
void menuVectores(){
    int tam = 3;
    int vA[tam],vB[tam],vS[tam],vR[tam],vM[tam],vMP[tam];
    printf("Ingrese para cada vector 3 valores: \n");
    cargarVector(vA,tam);
    cargarVector(vB,tam);
    mostrarOperacionesVectores(vA,vB,tam,vS,vR,vM,vMP);

}
void cargarVector(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        printf("Ingrese un numero para el vector: \n");
        scanf("%d",&v[i]);
    }
}
void sumaVectores(int vA[], int vB[], int t){
    int i,vectorS[3];
    for(i=0; i<t; i++){
        vectorS[i] = vA[i] + vB[i];
    }
    printf("\nSuma de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorS[0],vectorS[1],vectorS[2]);
}
void restaVectores(int vA[], int vB[], int t){
    int i,vectorR[3];
    for(i=0; i<t; i++){
        vectorR[i] = vA[i] - vB[i];
    }
    printf("\nResta de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorR[0],vectorR[1],vectorR[2]);
}
void multiVectores(int vA[], int vB[], int t){
    int i,vectorM[3];
    for(i=0; i<t; i++){
        vectorM[i] = vA[i] * vB[i];
    }
    printf("\nProducto escalar de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorM[0],vectorM[1],vectorM[2]);
}
void multiplicarVectorXunValor(int vA[], int t){
    int i,n,j,vectorMP[3];
    for(j=0; j<1; j++){
        printf("\nIngrese un numero el cual va a multiplicar el vector 1: \n");
        scanf("%d",&n);
        vectorMP[j] = vA[i] * n;
    }
    printf("\nProducto por un escalar de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorMP[0],vectorMP[1],vectorMP[2]);
}
void mostrarOperacionesVectores(int vA[], int vB[], int t, int vS, int vR, int vM, int vMP){
    printf("\nV1 [ %d %d %d ]\n",vA[0],vA[1],vA[2]);
    printf("\nV2 [ %d %d %d ]\n",vB[0],vB[1],vB[2]);
    sumaVectores(vA,vB,t);
    restaVectores(vA,vB,t);
    multiVectores(vA,vB,t);
    multiplicarVectorXunValor(vA,t);
}
void menuMatrices(){
    int renglon,columna,i,j;
    int cantVer = 12; //meses
    //int cantHor = 4; //empresas
    int matriz[cantVer][cantHor]; //matriz[12][4]
    int sumarFilas = 0;
    int sumarColumnas = 0;
    int totalGanado = 0;
    cargarMatriz(matriz,cantVer);
    mostrarMatriz(matriz,cantVer);
    totalGanadoXCadaEmpresaalanio(matriz,cantVer,sumarFilas);
    ganadoXMescontandoatodaslasempresas(matriz,cantVer,sumarColumnas);
    totalGanadoportodaslasempresasjuntas(matriz,cantVer);
    empresaQueganomasYenquemes(matriz,cantVer);
    calcularPromGananciasCadaEmpresaXbimestresQuienGanoMasenCadaBimestre(matriz,cantVer,sumarColumnas);
}
void cargarMatriz(int matriz[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz[columna][renglon] = rand() % 50;
        }
    }
}
void mostrarMatriz(int matriz[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
}
void totalGanadoXCadaEmpresaalanio(int matriz[][cantHor], int cantVer,int sumarFilas){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            sumarFilas = sumarFilas + matriz[columna][renglon];
        }
        printf("Total ganado por la empresa %d al anio es: %d \n", (renglon+1), sumarFilas );
        sumarFilas = 0;
        printf("\n" );
    }
}
void ganadoXMescontandoatodaslasempresas(int matriz[][cantHor], int cantVer, int sumarColumnas){
    int columna,renglon;
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        printf("Se gano en el mes %d contando a todas las empresas: %d \n", (columna+1), sumarColumnas );
        sumarColumnas = 0;
        printf("\n" );
    }
}
void totalGanadoportodaslasempresasjuntas(int matriz[][cantHor], int cantVer){
    int columna,renglon;
    int suma = 0;//  Suma va aqui...
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            suma = suma + matriz[columna][renglon];
        }
    }
    printf ( "Total ganado por todas las empresas juntas: %d\n", suma );
}
void empresaQueganomasYenquemes(int matriz[][cantHor], int cantVer){
    int columna,renglon;
    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    //char mayorPosicion = "0,0";
    //char menorPosicion = "0,0";
    // Recorrer la matriz y comparar
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            int elementoActual = matriz[columna][renglon];
            if(elementoActual > mayor){
                mayor = elementoActual;
                //mayorPosicion = renglon + "," + columna;
            }
            if(elementoActual < menor){
                menor = elementoActual;
                //menorPosicion = renglon + "," + columna;
            }
        }
    }
    printf("\n" );
    printf("Valor mas alto: %d \n",mayor);
    printf("Valor mas bajo: %d \n",menor);
    printf("\n" );
}
void calcularPromGananciasCadaEmpresaXbimestresQuienGanoMasenCadaBimestre(int matriz[][cantHor], int cantVer, int sumarColumnas){
    int columna,renglon;
    int promedio = 0;
    int grande=0;
    int bajo = 0;
    for(columna = 0; columna<cantVer; columna+=2){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        promedio = sumarColumnas / 2;
        printf("Promedio de ganancias de la empresa %d por bimestre es: %d \n", (columna+2), promedio);
        sumarColumnas = 0;
        if(promedio > grande){
            grande = promedio;
        }
        bajo = grande;
        if(promedio < bajo){
            bajo = promedio;
        }
    }
    printf("\n" );
    printf("Valor mas alto: %d \n",grande);
    printf("Valor mas bajo: %d \n",bajo);
    printf("\n" );
}
void menuMatricesDos(){
    int renglon,columna,i,j;
    int cantVer = 4; //meses
    //int cantHor = 4; //empresas
    int matriz1[cantVer][cantHor]; //matriz1[4][4]
    int matriz2[cantVer][cantHor]; //matriz2[4][4]
    cargarMatrizDos(matriz1,matriz2,cantVer);
    mostrarMatrizDos(matriz1,matriz2,cantVer);
    sumaMatricesDos(matriz1,matriz2,cantVer);
    restaMatricesDos(matriz1,matriz2,cantVer);
    multiplicacionMatricesDos(matriz1,matriz2,cantVer);
}
void cargarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz1[columna][renglon] = rand() % 10;
            matriz2[columna][renglon] = rand() % 10;
        }
    }
}
void mostrarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz1[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz2[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
}
void sumaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    printf("La suma de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] + [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])+matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])+matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
}
void restaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    printf("La resta de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] - [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])-matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])-matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
}
void multiplicacionMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    printf("La multiplicacion de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] * [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])*matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])*matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
}
void menuVectoresMatrices(){
    int opcion;
    printf("Primero antes de entrar al menu, cargar tamanio del vector y cargar el vector.\n");
    int tam = cargarTamanio();
    int vector[tam];
    cargarVectorAleatorio(vector,tam);
    printf("\nLo mismo pero con la matriz.\n");
    printf("\Renglones predefinidos.\n");
    //int cantHorX = cargarRenglones();
    int cantVerX = cargarColumnas();
    int matriz[cantHor][cantVerX];
    cargarMatriz(matriz,cantVerX);
    do{
        printf("########MENU########\n");
        printf("1- Mostrar vector.\n");
        printf("2- Mostrar matriz.\n");
        printf("0- Para salir.\n");
        printf("Elija una opcion: \n");
        scanf("%d",&opcion);
        submenuVectoresMatrices(opcion,vector,tam,matriz,cantVerX);
    }while(opcion!=0 && opcion>0 && opcion<3);
}
int submenuVectoresMatrices(int op, int v[], int t, int matriz[][cantHor], int cantVerX){
    switch(op){
        case 1:
            mostrarVector(v,t);
            break;
        case 2:
            mostrarMatriz(matriz,cantVerX);
            break;
    }
}
int cargarRenglones(){
    int renglones;
    printf("Ingrese la cant de renglones que va a tener la matriz: \n");
    scanf("%d",&renglones);
    return renglones;
}
int cargarColumnas(){
    int columnas;
    printf("Ingrese la cant de columnas que va a tener la matriz: \n");
    scanf("%d",&columnas);
    return columnas;
}
void oracion(){
    char oracion[40]=" ";
    char vocales[11]={'a','e','i','o','u','A','E','I','O','U'};
    char consonantes[43]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
    printf("\nEscriba una oracion: ");
    gets(oracion);
    int cantVoc=0;
    int cantCon=0;
    int i=0,j;
    while(oracion[i]!='\0'){
        for (j=0; j<=10; j++){
            if (oracion[i]==vocales[j]){
                cantVoc=cantVoc+1;
            }
        }
        for (j=0; j<43; j++){
            if (oracion[i]==consonantes[j]){
                cantCon=cantCon+1;
            }
        }
        i=i+1;
    }
    printf("\n\nCantidad de vocales ---> %d", cantVoc);
    printf("\n\nCantidad de consonantes ---> %d", cantCon);
    printf("\n");
}
