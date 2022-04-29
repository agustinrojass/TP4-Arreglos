#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <string.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void cargaInt(int arreglo[],int dimension,int *valildos);                                               //(1)
void muestraInt(int arreglo[],int validos);                                                             //(2)
void sumaInt(int arreglo[],int validos,int *suma);                                                      //(3)
void arregloPila(int arreglo[],int validos,Pila *pila);                                                 //(4)
void cargaFloat(float arreglo[],int dimension,int *valildos);                                           //(5)
void sumaFloat(float arreglo[],int validos,float *suma);                                                //(6)
void cargaChar(char arreglo[],int dimension,int *validos);                                              //(7)
void cargaString(char arreglo[],int *validos);                                                          //(8)
int busquedaChar(char arreglo[],int validos,char caracter);                                             //(9)
void muestraChar(char arreglo[],int validos);                                                           //(10)
void muestraString(char arreglo[]);                                                                     //(11)
int ordenChar(char arreglo[],int validos);                                                              //(12)
void invertirArreglo(char arreglo[],int validos);                                                       //(13)
int capicua(char arreglo[],int validos,char copia[]);                                                   //(14)
void juntarArreglos(char arreglo1[],int validos1,char arreglo2[],int validos2,char arregloFinal[]);     //(15)
void sumaAnteriores(int arreglo[],int validos,int arregloSuma[]);                                       //(16)
void ordenSeleccion(int arreglo[],int validos);                                                         //(17)
int posicionMenor (int arreglo[],int i,int validos);                                                    //(18)
void ordenInsercion(int arreglo[],int validos);                                                         //(19)
void insertar(int arreglo[], int i, int dato);                                                          //(20)
int main()
{
    int ejercicio;
    do
    {
        do
        {
            printf("EJERCICIOS                                                 INGRESAR");
            printf("\nEJERCICIO 1  ...................................................  1");
            printf("\nEJERCICIO 2  ...................................................  2");
            printf("\nEJERCICIO 3  ...................................................  3");
            printf("\nEJERCICIO 4  ...................................................  4");
            printf("\nEJERCICIO 5  ...................................................  5");
            printf("\nEJERCICIO 6  ...................................................  6");
            printf("\nEJERCICIO 7  ...................................................  7");
            printf("\nEJERCICIO 8  ...................................................  8");
            printf("\nEJERCICIO 9  ...................................................  9");
            printf("\nEJERCICIO 10 ................................................... 10");
            printf("\nEJERCICIO 11 ................................................... 11");
            printf("\nEJERCICIO 12 ................................................... 12");
            printf("\nEJERCICIO 13 ................................................... 13\n");
            printf("\nIngrese el ejercicio: ");
            scanf("%i",&ejercicio);
        }
        while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5 && ejercicio!=6 && ejercicio!=7 && ejercicio!=8 && ejercicio!=9 && ejercicio!=10 && ejercicio!=11 && ejercicio!=12 && ejercicio!=13 && ejercicio!=0);
        if(ejercicio!=0)
        {
            printf("\nEJERCICIO %i\n\n",ejercicio);
        }
        switch(ejercicio)
        {
            case 1:
            {
                ejercicio1();
            }
            break;
            case 2:
            {
                ejercicio2();
            }
            break;
            case 3:
            {
                ejercicio3();
            }
            break;
            case 4:
            {
                ejercicio4();
            }
            break;
            case 5:
            {
                ejercicio5();
            }
            break;
            case 6:
            {
                ejercicio6();
            }
            break;
            case 7:
            {
                ejercicio7();
            }
            break;
            case 8:
            {
                ejercicio8();
            }
            break;
            case 9:
            {
                ejercicio9();
            }
            break;
            case 10:
            {
                ejercicio10();
            }
            break;
            case 11:
            {
                ejercicio11();
            }
            break;
            case 12:
            {
                ejercicio12();
            }
            break;
            case 13:
            {
                ejercicio13();
            }
            break;
        }
    }
    while(ejercicio!=0);
    printf("\nTP4 TERMINADO\n");
    printf("\nVersion 1.5\n");
    return 0;
}
void cargaInt(int arreglo[],int dimension,int *validos)                                             //INICIO FUNCION CARGAINT               (1)
{
    int i;
    char continuar='s';
    for(i=0;i<dimension && continuar=='s';i++)
    {
        printf("Ingrese un numero entero: ");
        scanf("%i",&arreglo[i]);
        printf("Desea ingresar otro numero? s/n Respuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    *validos=i;
}                                                                                                   //FIN FUNCION CARGAINT
void muestraInt(int arreglo[],int validos)                                                          //INICIO FUNCION MUESTRAINT             (2)
{
    int i;
    printf("El arreglo es: \n");
    for(i=0;i<validos;i++)
    {
        printf("| %i |",arreglo[i]);
    }
}                                                                                                   //FIN FUNCION MUESTRAINT
void sumaInt(int arreglo[],int validos,int *suma)                                                   //INICIO FUNCION SUMAINT                (3)
{
    int i;
    for(i=0;i<validos;i++)
    {
        *suma=*suma+arreglo[i];
    }
}                                                                                                   //FIN FUNCION SUMAINT
void arregloPila(int arreglo[],int validos,Pila *pila)                                              //INICIO FUNCION ARREGLOPILA            (4)
{
    int i;
    for(i=0;i<validos;i++)
    {
        apilar(pila,arreglo[i]);
    }
}                                                                                                   //FIN FUNCION ARREGLOPILA
void cargaFloat(float arreglo[],int dimension,int *validos)                                         //INICIO FUNCION CARGAFLOAT             (5)
{
    int i;
    char continuar='s';
    for(i=0;i<dimension && continuar=='s';i++)
    {
        printf("Ingrese un numero real: ");
        scanf("%f",&arreglo[i]);
        printf("Desea ingresar otro numero? s/n Respuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    *validos=i;
}                                                                                                   //FIN FUNCION CARGAFLOAT
void sumaFloat(float arreglo[],int validos,float *suma)                                             //INICIO FUNCION SUMAFLOAT              (6)
{
    int i;
    for(i=0;i<validos;i++)
    {
        *suma=*suma+arreglo[i];
    }
}                                                                                                   //FIN FUNCION SUMAFLOAT
void cargaChar(char arreglo[],int dimension,int *validos)                                           //INICIO FUNCION CARGACHAR              (7)
{
    int i;
    char continuar='s';
    for(i=0;i<dimension && continuar=='s';i++)
    {
        printf("Ingrese un caracter: ");
        fflush(stdin);
        scanf("%c",&arreglo[i]);
        printf("Desea ingresar otro caracter? s/n Respuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    *validos=i;
}                                                                                                   //FIN FUNCION CARGACHAR
void cargaString(char arreglo[],int *validos)                                                       //INICIO FUNCION CARGASTRING            (8)
{
    printf("Introduce una cadena de caracteres: ");
    scanf("%s",arreglo);
    *validos=strlen(arreglo);
    printf("\n");
}                                                                                                   //FIN FUNCION CARGASTRING
int busquedaChar(char arreglo[],int validos,char caracter)                                          //INICIO FUNCION BUSQUEDACHAR           (9)
{
    int i,flag=0;
    for(i=0;i<validos && flag==0;i++)
    {
        if(caracter==arreglo[i])
        {
            flag=1;
        }
    }
    return flag;
}                                                                                                   //FIN FUNCION BUSQUEDACHAR
void muestraChar(char arreglo[],int validos)                                                        //INICIO FUNCION MUESTRACHAR            (10)
{
    int i;
    printf("El arreglo es: \n");
    for(i=0;i<validos;i++)
    {
        printf("| %c |",arreglo[i]);
    }
}                                                                                                   //FIN FUNCION MUESTRACHAR
void muestraString(char arreglo[])                                                                  //INICIO FUNCION MUESTRASTRING          (11)
{
    printf("El arreglo es: %s\n",arreglo);
}                                                                                                   //FIN FUNCION MUESTRASTRING
int ordenChar(char arreglo[],int validos)                                                           //INICIO FUNCION ORDENCHAR              (12)
{
    int i,j,flag=0;
    char aux;
    for(i=0;i<validos-1;i++)
    {
        for (j=1;j<validos;j++)
        {
            if(arreglo[j]<arreglo[j-1])
            {
                aux=arreglo[j];
                arreglo[j]=arreglo[j-1];
                arreglo[j-1]=aux;
            }
            else
            {
                flag=1;
            }
        }
    }
    return flag;
}                                                                                                   //FIN FUNCION ORDENCHAR
void invertirArreglo(char arreglo[],int validos)                                                    //INICIO FUNCION INVERTIRARREGLO        (13)
{
    int i;
    char caracter;
    for(i=0;i<validos/2;i++)
    {
        caracter=arreglo[i];
        arreglo[i]=arreglo[validos-1-i];
        arreglo[validos-1-i]=caracter;
    }
}                                                                                                   //FIN FUNCION INVERTIRARREGLO
int capicua(char arreglo[],int validos,char copia[])                                                //INICIO FUNCION CAPICUA                (14)
{
    int i=0,flag=1;
    while(i<validos && flag==1)
    {
        if(arreglo[i]==copia[i])
        {
            i++;
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    return flag;
}                                                                                                   //FIN FUNCION CAPICUA
void juntarArreglos(char arreglo1[],int validos1,char arreglo2[],int validos2,char arregloFinal[])  //INICIO FUNCION JUNTARARREGLOS         (15)
{
    int i,j=validos1;
    for(i=0;i<validos1;i++)
    {
        arregloFinal[i]=arreglo1[i];
    }
    for(i=0;i<validos2;i++)
    {
        arregloFinal[j]=arreglo2[i];
        j++;
    }
}                                                                                                   //FIN FUNCION JUNTARARREGLOS
void sumaAnteriores(int arreglo[],int validos,int arregloSuma[])                                    //INICIO FUNCION SUMAANTERIORES         (16)
{
    int i;
    for(i=0;i<validos;i++)
    {
        int suma=0;
        sumaInt(arreglo,i+1,&suma);
        arregloSuma[i]=suma;
    }

}                                                                                                   //FIN FUNCION SUMAANTERIORES
void ordenSeleccion(int arreglo[],int validos)                                                      //INICIO FUNCION ORDENSELLECION         (17)
{
    int i=0,posicion;
    int aux;
    while (i<validos-1)
    {
        posicion=posicionMenor(arreglo,i,validos);                                                  //FUNCION POSICIONMENOR
        aux=arreglo[posicion];
        arreglo[posicion]=arreglo[i];
        arreglo[i]= aux;
        i++;
    }
}                                                                                                   //FIN FUNCION ORDENSELLECION
int posicionMenor (int arreglo[],int i,int validos)                                                 //INICIO FUNCION POSICIONMENOR          (18)
{
    int menor=arreglo[i];
    int posicion=i;
    int j=i+1;
    while (j<validos)
    {
        if(menor>arreglo[j])
        {
            menor=arreglo[j];
            posicion=j;
        }
        j++;
    }
    return posicion;
}                                                                                                   //FIN FUNCION POSICIONMENOR
void ordenInsercion(int arreglo[],int validos)                                                      //INICIO FUNCION ORDENINSERCION         (19)
{
    int i=0;
    while (i<validos-1)
    {
        insertar(arreglo,i,arreglo[i+1]);                                                           //FUNCION INSERTAR
        i++;
    }
}                                                                                                   //FIN FUNCION ORDENINSERCION
void insertar(int arreglo[], int i, int valor)                                                      //INICIO FUNCION INSERTAR               (20)
{
    while(i>=0 && valor<arreglo[i])
    {
        arreglo[i+1]=arreglo[i];
        i--;
    }
    arreglo[i+1]=valor;
}                                                                                                   //FIN FUNCION INSERTAR
void ejercicio1()
{
    //Hacer una funcion que reciba como parametro un arreglo de numeros enteros y permita que el usuario ingrese valores al mismo por teclado.
    //La funcion debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero validos).
    int validos=0;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                                                  //FUNCION CARGAINT
    printf("La cantidad de elementos cargados es: %i\n\n",validos);
}
void ejercicio2()
{
    //Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y los muestre por pantalla.
    int validos=0;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                                                  //FUNCION CARGAINT
    muestraInt(arreglo,validos);                                                                    //FUNCION MUESTRAINT
    printf("\n\n");
}
void ejercicio3()
{
    //Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y calcule la suma de sus elementos.
    int validos=0,suma=0;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                                                  //FUNCION CARGAINT
    muestraInt(arreglo,validos);                                                                    //FUNCION MUESTRAINT
    sumaInt(arreglo,validos,&suma);                                                                 //FUNCION SUMAINT
    printf("\n\nLa suma de los elementos del arreglo es: %i\n\n",suma);
}
void ejercicio4()
{
    //Hacer una funcion que reciba como parametro un arreglo, la cantidad de elementos (validos) cargados en el y una Pila.
    //La funcion debe copiar los elementos del arreglo en la pila.
    int validos=0;
    int arreglo[50]={};
    Pila pila;
    inicpila(&pila);
    cargaInt(arreglo,50,&validos);                                                                  //FUNCION CARGAINT
    muestraInt(arreglo,validos);                                                                    //FUNCION MUESTRAINT
    arregloPila(arreglo,validos,&pila);                                                             //FUNCION ARREGLOPILA
    printf("\n\nLa pila es: ");
    mostrar(&pila);
}
void ejercicio5()
{
    //Realizar una funcion que sume los elementos de un arreglo de numeros reales (float) de dimension 100.
    //Se recomienda hacer una funcion para cargar y otra para mostrar para este tipo de dato asociado al arreglo.
    int validos=0;
    float suma=0;
    float arreglo[100]={};
    cargaFloat(arreglo,100,&validos);                                                               //FUNCION CARGAFLOAT
    sumaFloat(arreglo,validos,&suma);                                                               //FUNCION SUMAFLOAT
    printf("La suma de los elementos del arreglo es: %.2f\n\n",suma);
}
void ejercicio6()
{
    //Realizar una funcion que indique si un elemento dado se encuentra en un arreglo de caracteres.
    int validos,flag=0;
    char caracter;
    char arreglo[50]={};
    cargaString(arreglo,&validos);                                                                  //FUNCION CARGASTRING
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\nIngrese el caracter que desea buscar: ");
    fflush(stdin);
    scanf("%c",&caracter);
    flag=busquedaChar(arreglo,validos,caracter);                                                    //FUNCION BUSQUEDACHAR
    if(flag==1)
    {
        printf("El caracter %c esta en el arreglo.\n\n",caracter);
    }
    else
    {
        printf("El caracter %c no esta en el arreglo.\n\n",caracter);
    }
}
void ejercicio7()
{
    //Realizar una funcion que inserte un caracter en un arreglo ordenado alfabeticamente, conservando el orden.
    int validos=0,flag=0;
    char arreglo[50]={};
    cargaString(arreglo,&validos);                                                                  //FUNCION CARGASTRING
    while(flag!=1)
    {
        flag=ordenChar(arreglo,validos);                                                            //FUNCION ORDENCHAR
    }
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\nIntroduce un caracter: ");
    fflush(stdin);
    scanf("%c",&arreglo[validos]);
    validos++;
    flag=0;
    while(flag!=1)
    {
        flag=ordenChar(arreglo,validos);                                                            //FUNCION ORDENCHAR
    }
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\n");
}
void ejercicio8()
{
    //Realizar una funcion que obtenga el maximo caracter de un arreglo dado.
    int validos=0,flag=0;
    char arreglo[50]={};
    cargaString(arreglo,&validos);                                                                  //FUNCION CARGASTRING
    while(flag!=1)
    {
        flag=ordenChar(arreglo,validos);                                                            //FUNCION ORDENCHAR
    }
    printf("Arreglo ordenado\n");
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\nEntendiendo que el maximo caracter es el que tiene el numero mas alto en el codigo ascii, el maximo es \"%c\".\n\n",arreglo[validos-1]);
}
void ejercicio9()
{
    //Realizar una funcion que determine si un arreglo es capicua.
    int validos=0;
    int flag;
    char arreglo[50]={},copia[50]={};
    cargaString(arreglo,&validos);                                                                  //FUNCION CARGASTRING
    strcpy(copia,arreglo);
    invertirArreglo(copia,validos);                                                                 //FUNCION INVERTIRARREGLO
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\n");
    flag=capicua(arreglo,validos,copia);                                                            //FUNCION CAPICUA
    if(flag==1)
    {
        printf("El arreglo es capicua.");
    }
    else
    {
        printf("El arreglo no es capicua.");
    }
    printf("\n\n");
}
void ejercicio10()
{
    //Realizar una funcion que invierta los elementos de un arreglo (sin utilizar un arreglo auxiliar).
    int validos=0;
    char arreglo[50]={};
    cargaString(arreglo,&validos);                                                                  //FUNCION CARGASTRING
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\n");
    invertirArreglo(arreglo,validos);                                                               //FUNCION INVERTIRARREGLO
    printf("Arreglo invertido\n");
    muestraChar(arreglo,validos);                                                                   //FUNCION MUESTRACHAR
    printf("\n\n");
}
void ejercicio11()
{
    //Ordenar un arreglo segun los siguientes metodos:
    //Seleccion
    //Insercion
    int validos=0;
    char orden;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                                                  //FUNCION CARGAINT
    muestraInt(arreglo,validos);                                                                    //FUNCION MUESTRAINT
    do
    {
        printf("\n\nIngrese por que metodo desea ordenar el arreglo: s/i Respuesta: ");
        fflush(stdin);
        scanf("%c",&orden);
    }
    while(orden!='s' && orden!='i');
    switch(orden)
    {
        case 's':
        {
            ordenSeleccion(arreglo,validos);                                                        //FUNCION ORDENSELLECCION
        }
        break;
        case 'i':
        {
            ordenInsercion(arreglo,validos);                                                        //FUNCION ORDENSELLECCION
        }
        break;
    }
    printf("\nArreglo ordenado\n");
    muestraInt(arreglo,validos);                                                                    //FUNCION MUESTRAINT
    printf("\n\n");
}
void ejercicio12()
{
    //Dados dos arreglos ordenados alfabeticamente, crear un tercer arreglo con los elementos de los dos primeros intercalados, de manera que quede un arreglo tambien ordenado.
    int validos1=0,validos2=2,flag1=0,flag2=0,flagFinal=0;
    char arreglo1[50]={},arreglo2[50]={},arregloFinal[100]={};
    cargaString(arreglo1,&validos1);                                                                //FUNCION CARGASTRING
    cargaString(arreglo2,&validos2);                                                                //FUNCION CARGASTRING
    while(flag1!=1)
    {
        flag1=ordenChar(arreglo1,validos1);                                                         //FUNCION ORDENCHAR
    }
    muestraChar(arreglo1,validos1);                                                                 //FUNCION MUESTRACHAR
    while(flag2!=1)
    {
        flag2=ordenChar(arreglo2,validos2);                                                         //FUNCION ORDENCHAR
    }
    muestraChar(arreglo2,validos2);                                                                 //FUNCION MUESTRACHAR
    juntarArreglos(arreglo1,validos1,arreglo2,validos2,arregloFinal);                               //FUNCION JUNTARARREGLOS
    while(flagFinal!=1)
    {
        flagFinal=ordenChar(arregloFinal,validos1+validos2);                                        //FUNCION ORDENCHAR
    }
    muestraChar(arregloFinal,validos1+validos2);
}
void ejercicio13()
{
    //Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del contenido de todo los elementos anteriores al indice actual: {1,6,12,19,27}.
    int validos=0;
    int arreglo[50]={},arregloFinal[50]={};
    cargaInt(arreglo,50,&validos);                                      //FUNCION CARGAINT
    muestraInt(arreglo,validos);                                        //FUNCION MUESTRAINT
    printf("\n\n");
    sumaAnteriores(arreglo,validos,arregloFinal);
    printf("Arreglo suma de los anteriores\n");
    muestraInt(arregloFinal,validos);                                   //FUNCION MUESTRAINT
    printf("\n\n");
}
