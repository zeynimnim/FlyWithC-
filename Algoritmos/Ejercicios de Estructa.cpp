#include <iostream>

using namespace std;

const int MAX_ALM= 50;

struct Alumnos
{
    int ID;
    string nombre;
    double notas[3];
};

void espectaculo_media(Alumnos *Datos,int n,int *Media)
{
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Media Nota de "<<Datos[i].nombre<<" es : "<<Media[i]<<endl;
    }

}

int main()
{
    Alumnos Datos[MAX_ALM];
    int Media[MAX_ALM];

    cout<<"Introduzca numero de alumnos: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        cout<<"Introduzca ID de estudiante "<<i+1<<": ";
        cin>>Datos[i].ID;
        cout<<"Introduzca nombre de estudiante "<<i+1<<": ";
        cin>>Datos[i].nombre;
        for(int j=0; j<3; j++)
        {
            cout<<"Introduzca nota de "<<j+1<<". leccion de estudiante "<<i+1<<" :";
            cin>>Datos[i].notas[j];
            sum+= Datos[i].notas[j];
        }
        Media[i]=sum/3;

    }
    espectaculo_media(Datos,n,Media);

    return 0;
}
