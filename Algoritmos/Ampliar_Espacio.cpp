#include <iostream>

using namespace std;


void ampliar(int *&v,int old_tama,int new_tama)
{
    if(new_tama > old_tama)
    {
        int *v_ampliado= new int[new_tama];

        for(int i=0; i<old_tama; i++)
            v_ampliado[i]= v[i];
        delete []v;
        v=v_ampliado;

    }
}

int main()
{
    int *v,n1,n2;
    cout<<"Introduzca el tamano del vector: ";
    cin>>n1;
    cout<<"Introduzca el nuevo tamano del vector: ";
    cin>>n2;
    v= new int[n1];
    ampliar(v,n1,n2);
    return 0;
}
