#include <iostream>
using namespace std;

const int FIL=20, COL=20; //bunlar makro olarak da yazilabilir, sen bilirsin

void lee_matriz(double m[][COL], int util_fil,int util_col)
{
    for(int f=0; f<util_fil; f++)
    {
        for(int c=0; c<util_col; c++)
        {
            cout<<"Introduzco el elemento ("<<f<<","<<c<<"):";
            cin>>m[f][c];
        }
    }
}
///fil_enconrado ve col_encontrado'yu & ile yazmasaydýk, deðerleri deðiþince mainde deðiþmeyecekti
//Yeni deðerlere ulaþmak için fonksiyonu dönüslü yapsak bile main'e yeni deðerler dönmeyecekti..
void buscanda_por(const double m[][COL],int util_fil,int util_col,double elemento,int &fil_encontrado, int &col_encontrado)
{
    bool encontrado=false;
    for(int f=0; !encontrado && (f<util_fil); f++)
    {
        for(int c=0; !encontrado && (c<util_col); c++)
        {
            if (m[f][c]==elemento)
            {
                fil_encontrado=f;
                col_encontrado=c;
                encontrado=true;
            }
        }
    }
}
//direk char da yazılır, sabit olduğunu göstermek için const yazabilirsin
int lee_int(const char mensaje[],int min,int max)
{
    int aux; //aux= auxiliar= assistant
    do
    {
        cout<<mensaje;
        cin>>aux;
    }
    while(aux<min || aux>max);
    return aux;
}

int main()
{
    double elemento,matriz[FIL][COL];
    int i,j;
    i= lee_int("Introduzca el numero de filas: ",1,FIL);
    j= lee_int("Introduzca el numero de columnas: ",1,COL);
    lee_matriz(matriz,i,j);
    int a=-1,b=-1;
    cout<<"Cual elemento estas buscando por? ";
    cin>>elemento;
    buscanda_por(matriz,i,j,elemento,a,b);
    cout<<"Fila del elemento: "<<a<<" y Columna del elemento: "<<b;

    return 0;
}
