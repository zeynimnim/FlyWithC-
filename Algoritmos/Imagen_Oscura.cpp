#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
const int MAX_SIG=50;

void imagen_creadora(double imagen[][MAX_SIG],int tamano)
{
    int i,j;
    for(i=0; i<tamano; i++)
    {
        for(j=0; j<tamano; j++)
        {
            do
                *(*(imagen+i)+ j) = rand()%100;
            while(*(*(imagen+i)+ j)<10);
        }
    }

}

void imagen_mostrar(double *vectora,int tamano)
{
    int i,j;
    for(i=0; i<tamano; i++)
    {
        for(j=0; j<tamano; j++)
            cout<<vectora[i*tamano+j]<<" ";
        cout<<endl;
    }
}

void imagen_oscurece(double *vectora,int tamano)
{
    double *ptr=vectora;
    for (; ptr<(vectora+tamano*tamano*(sizeof(double)/sizeof(int))); ptr++)
        *(ptr) += *(ptr)*(0.3);
}

int main()
{
    srand(time(NULL));
    double imagen[MAX_SIG][MAX_SIG];
    double vectora[MAX_SIG*MAX_SIG];
    int tamano,i,j;
    cout<<"Introduzca de tamano de imagen por favor: ";
    cin>>tamano;
    imagen_creadora(imagen,tamano);
    for(i=0; i<tamano; i++)
    {
        for(j=0; j<tamano; j++)
            vectora[i*tamano+j]=*(*(imagen+i)+j);
    }
    cout<<endl;
    cout<<"Antes.."<<endl;
    cout<<endl;
    imagen_mostrar(vectora,tamano);
    imagen_oscurece(vectora,tamano);
    cout<<endl;
    cout<<"Despues"<<endl;
    cout<<endl;
    imagen_mostrar(vectora,tamano);


    return 0;
}
