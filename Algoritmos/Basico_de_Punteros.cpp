#include <iostream>

using namespace std;

int main()
{

//2 Parte 1: Uso básico de Punteros (2
    int var = 5;
    int *p1, *p2;
// Modifica la variable var usando p1
    p1=&var;
    *p1= 8;
// Crea un segundo puntero p2 que apunte a p1
    p2=p1;
// Modifica var usando p2
    *p2= 10;

    cout<<*p2<<endl;


    return 0;
}
