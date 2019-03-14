#include <iostream>

using namespace std;

int *copia_vector(const int v[],int n)
{
    int *copia=new int[n];
    for(int i=0; i<n; i++)
        copia[i]=v[i];
    return copia;
}

int main()
{
    int v[30],*v2=0,m;
    cout<<"Numero de casillas: ";
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cout<<"Valor en la casilla "<<i+1<<": ";
        cin>>v[i];
    }
    cout<<endl;
    //Copiar en v2(dinamico) el vector v1
    v2=copia_vector(v,m);
    for(int i=0; i<m; i++) //Escribir vector v2
        cout<<"En la casilla "<<i+1
            <<" guardo: "<<v2[i]<<endl;
    delete [] v2; //Liberar memoria
    v2=0;
    return 0;
}
