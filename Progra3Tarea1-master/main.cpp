#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    int c= a+b;
    return c;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    int c= a-b;
    return c;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    int c= a*b;
    return c;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    int c = a/b;
    return c;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b)
    {
        return a;
    }else
    {
        return b;
    }
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if(a>b)
    {
        return b;
    }else
    {
        return a;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }else if(b>a && b>c)
    {
        return b;
    }else
    {
        return c;
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
   arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor;
    int w=1;
    for(int i=0;i<tamano;i++)
   {
       if(arreglo[i]>arreglo[w])
       {
           mayor=arreglo[i];
           w++;
       }else
       {
           mayor=arreglo[w];

       }
   }
   return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor=arreglo[0];
    for(int i=0;i<tamano;i++)
    {
        if(menor>arreglo[i])
        {
            menor=arreglo[i];
        }
    }
    return menor;

}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    double sumar;
    double promedio;

    for(int i=0;i<tamano;i++)
    {
        sumar+= arreglo[i];
    }

    promedio=sumar/tamano;
    return promedio;

    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
