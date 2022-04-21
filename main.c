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

void cargaInt(int arreglo[],int dimension,int *valildos);
void muestra(int arreglo[],int validos);
void sumaInt(int arreglo[],int validos,int *suma);
void cargaFloat(float arreglo[],int dimension,int *valildos);
void sumaFloat(float arreglo[],int validos,float *suma);
void cargaChar(char arreglo[],int dimension,int *validos);
void busquedaChar(char arreglo,int validos,int *flag,char caracter);

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
    printf("\nVersion 1.1\n");
    return 0;
}

void cargaInt(int arreglo[],int dimension,int *validos)                 //INICIO FUNCION CARGAINT
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
}                                                                       //FIN FUNCION CARGAINT
void muestra(int arreglo[],int validos)                                 //INICIO FUNCION MUESTRA
{
    int i;
    for(i=0;i<validos;i++)
    {
        printf("| %i |",arreglo[i]);
    }
}                                                                       //FIN FUNCION MUESTRA
void sumaInt(int arreglo[],int validos,int *suma)                       //INICIO FUNCION SUMAINT
{
    int i;
    for(i=0;i<validos;i++)
    {
        *suma=*suma+arreglo[i];
    }
}                                                                       //FIN FUNCION SUMAINT
void arregloPila(int arreglo[],int validos,Pila *pila)                  //INICIO FUNCION ARREGLOPILA
{
    int i;
    for(i=0;i<validos;i++)
    {
        apilar(pila,arreglo[i]);
    }
}                                                                       //FIN FUNCION ARREGLOPILA
void cargaFloat(float arreglo[],int dimension,int *validos)             //INICIO FUNCION CARGAFLOAT
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
}                                                                       //FIN FUNCION CARGAFLOAT
void sumaFloat(float arreglo[],int validos,float *suma)                 //INICIO FUNCION SUMAFLOAT
{
    int i;
    for(i=0;i<validos;i++)
    {
        *suma=*suma+arreglo[i];
    }
}                                                                       //FIN FUNCION SUMAFLOAT
void cargaChar(char arreglo[],int dimension,int *validos)               //INICIO FUNCION CARGACHAR
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
}                                                                       //FIN FUNCION CARGACHAR
/*void busquedaChar(char arreglo,int validos,int *flag,char caracter)     //INICIO FUNCION BUSQUEDACHAR
{
    int i;

    for(i=0;i<validos && flag==0;i++)
    {
        if(caracter==arreglo[i])
        {
            *flag=1;
        }
    }


}*/                                                                       //FIN FUNCION BUSQUEDACHAR
void muestraChar(char arreglo[],int validos)                            //INICIO FUNCION MUESTRA
{
    int i;
    for(i=0;i<validos;i++)
    {
        printf("| %i |",arreglo[i]);
    }
}                                                                       //FIN FUNCION MUESTRA



void ejercicio1()
{
    //Hacer una funcion que reciba como parametro un arreglo de numeros enteros y permita que el usuario ingrese valores al mismo por teclado.
    //La funcion debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero validos).
    int validos=0;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                      //FUNCION CARGAINT
    printf("La cantidad de elementos cargados es: %i\n\n",validos);
}
void ejercicio2()
{
    //Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y los muestre por pantalla.
    int validos=0;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                      //FUNCION CARGAINT
    muestra(arreglo,validos);                                           //FUNCION MUESTRA
    printf("\n\n");
}
void ejercicio3()
{
    //Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos) cargados en el y calcule la suma de sus elementos.
    int validos=0,suma=0;
    int arreglo[50]={};
    cargaInt(arreglo,50,&validos);                                      //FUNCION CARGAINT
    sumaInt(arreglo,validos,&suma);                                     //FUNCION SUMAINT
    printf("La suma de los elementos del arreglo es: %i",suma);
}
void ejercicio4()
{
    //Hacer una funcion que reciba como parametro un arreglo, la cantidad de elementos (validos) cargados en el y una Pila.
    //La funcion debe copiar los elementos del arreglo en la pila.
    int validos=0;
    int arreglo[50]={};
    Pila pila;
    inicpila(&pila);
    cargaInt(arreglo,50,&validos);                                      //FUNCION CARGAINT
    arregloPila(arreglo,validos,&pila);                                 //FUNCION ARREGLOPILA
    printf("La pila es: ");
    mostrar(&pila);
}
void ejercicio5()
{
    //Realizar una funcion que sume los elementos de un arreglo de numeros reales (float) de dimension 100.
    //Se recomienda hacer una funcion para cargar y otra para mostrar para este tipo de dato asociado al arreglo.
    int validos=0;
    float suma=0;
    float arreglo[100]={};
    cargaFloat(arreglo,100,&validos);                                   //FUNCION CARGAFLOAT
    sumaFloat(arreglo,validos,&suma);                                   //FUNCION SUMAFLOAT
    printf("La suma de los elementos del arreglo es: %.2f",suma);
}
void ejercicio6()
{
    //Realizar una funcion que indique si un elemento dado se encuentra en un arreglo de caracteres.
    int validos,flag=0;
    char caracter;
    char arreglo[50]={'4','g','r','?'};
    //cargaChar(arreglo,50,&validos);                                     //FUNCION CARGACHAR
    muestraChar(arreglo,validos);                                       //FUNCION MUESTRACHAR
    /*printf("Ingrese el caracter que desea buscar: ");
    fflush(stdin);
    scanf("%c",&caracter);
    busquedaChar(arreglo,validos,&flag,caracter);                       //FUNCION BUSQUEDACHAR
    if(flag==1)
    {
        printf("El caracter %c esta en el arreglo.\n\n",caracter);
    }
    else
    {
        printf("El caracter %c no esta en el arreglo.\n\n",caracter);
    }*/
}
void ejercicio7()
{
    //Realizar una funcion que inserte un caracter en un arreglo ordenado alfabeticamente, conservando el orden.
}
void ejercicio8()
{
    //Realizar una funcion que obtenga el maximo caracter de un arreglo dado.

}
void ejercicio9()
{
    //Realizar una funcion que determine si un arreglo es capicua.

}
void ejercicio10()
{
    //Realizar una funcion que invierta los elementos de un arreglo (sin utilizar un arreglo auxiliar).

}
void ejercicio11()
{
    //Ordenar un arreglo segun los siguientes metodos:
    //Seleccion
    //Insercion

}
void ejercicio12()
{
    //Dados dos arreglos ordenados alfabeticamente, crear un tercer arreglo con los elementos de los dos primeros intercalados, de manera que quede un arreglo tambien ordenado

}
void ejercicio13()
{
    //Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del contenido de todo los elementos anteriores al indice actual: {1,6,12,19,27}.

}
