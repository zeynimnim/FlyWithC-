#include <iostream>

using namespace std;

void repite_items(int *&v, int &n,int *&v2,int &n2)
{

    int conta=0,i,j;
    for(i=0; i<n; i++)
    {
        j=1;
        while(j<*(v+i))
        {
            conta++;
            j++;
        }
    }
    n2=n+conta;
    v2= new int [n2];
    int k=0;
    i=0;
    while(i<n)
    {
        j=1;
        while(j<=*(v+i))
        {
            v2[k]= v[i];
            j++;
            k++;
        }
        i++;
    }

    delete[] v;
    v=v2;

}


int main()
{
    int flag,i,j,n,*v=0,n2,*v2=0;
    cout<<"Introduzca tamano de vector: ";
    cin>>n;
    v= new int [n];
    cout<<"Como te gustaria empezar? "<<endl
        <<"1)Introducir elementos de vector tu mismo "<<endl
        <<"2)Introducir elementos automaticamente"<<endl;
    cin>>flag;


    if (flag==1)
    {
        cout<<endl<<"!!!ADVERTENCIA!!! No ingrese 0"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<"Introduzca la elemento "<<i<<" por favor:";
            cin>>v[i];
        }
    }
    else
        for(i=0; i<n; i++)
            v[i]=i+1;


    for(i=0; i<n; i++)
        cout<<*(v+i)<<" ";

    repite_items(v,n,v2,n2);

    cout<<endl<<"Nueve vector: "<<endl;
    for(i=0; i<n2; i++)
        cout<<*(v+i)<<" ";

    return 0;
}
