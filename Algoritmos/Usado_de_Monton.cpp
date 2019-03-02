//Punteros a objetos struct
#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double estatura;
    Persona *pareja;
};

int main()
{

    Persona pepe= {"Pepe",27,1.89,0};
    Persona maria= {"Maria",25,1.74,0};
    Persona *ptr;
    ptr=&pepe;
    (*ptr).pareja=&maria;
    maria.pareja=&pepe;
    cout<<"Informacion de Pepe.."<<endl;
    cout<<(*ptr).nombre<<endl;
    cout<<(*ptr).edad<<endl;
    cout<<(*ptr).estatura<<endl;
    cout<<"La pareja de "<<(*ptr).nombre<<" es "<<(*((*ptr).pareja)).nombre;


    return 0;
}
