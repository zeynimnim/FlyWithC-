#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string *palabras=0;
    int n,i;
    cout<<"Introduzca el numero de palabras: ";
    cin>>n;
    palabras=(string*)malloc(n*(sizeof(string)));

    for(i=0; i<n; i++)
    {
        cout<<"Introduzca palabra "<<i+1<<". => ";
        cin>>palabras[i];
    }

    cout<<endl<<"Antes..."<<endl<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"Palabra "<<i+1<<". => "<<*(palabras+i)<<endl<<endl;
    }

    // impresion_inversa
    cout<<endl<<"Despues..."<<endl<<endl;
    for(i=n-1; i>=0; i--)
    {
        cout<<"Palabra "<<n-i+1<<". => "<<*(palabras+i)<<endl<<endl;
    }

    free(palabras);

    return 0;
}
