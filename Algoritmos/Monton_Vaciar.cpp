#include <iostream>

using namespace std;

int main()
{
    int *v=0,n;

    cout<<"Numero de casillas: ";
    cin>>n;
    v= new int [n]; //Reserva de memeoria
    for(int i=0; i<n; i++) //Lectura del vector dinamico
    {
        cout<<"Valor en casilla "<<i+1<<": ";
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++) //Escritura del vector dinamico
        cout<<"En la casilla "<<i+1
            <<" guardo: "<<v[i]<<endl;
    delete []v; //Liberar Memoria
    v=0;
    cout<<endl;
    cout<<"El nuevo valor de v es: "<<v;

    return 0;
}
