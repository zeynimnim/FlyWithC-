#include <iostream>

using namespace std;

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

        cout<<endl<<"!!!ADVERTENCIA!!! No ingrese el primer elemento 0"<<endl;
    if (flag==1)
     for(i=0;i<n;i++){
             cout<<"Introduzca la elemento "<<i<<" por favor:";
             cin>>v[i];
     }
        else
             for(i=0; i<n; i++)
                 v[i]=i+1;


    for(i=0; i<n; i++)
        cout<<*(v+i)<<" ";

    int conta=0;
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
   // delete v[];
    //v=v2;
    //Bu ikisini yap�p a�a��y� v yap�nca d�zg�n �al��m�yor kodum!!
    cout<<endl<<"Nueve vector: "<<endl;
    for(i=0; i<n2; i++)
        cout<<*(v2+i)<<" ";

    return 0;
}
