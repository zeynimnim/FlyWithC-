#include <iostream>

using namespace std;

//si quieres llegar a la matriz con un puntero, traducelo a vector
void  printreversemi(int *serie,int fmax,int cmax)
{
    for(int f=fmax; f>=1; f--)
    {
        for(int c=1; c<=cmax; c++)
            cout<<serie[f*cmax+c]<<" ";
        cout<<endl;
    }

}

int main()
{
    //3.4 Mostrar filas en orden invertido (1)

    const int nfil = 3;
    const int ncol=3;
    int *m;
    m= new int [nfil*ncol];

    for(int f=0; f<nfil; f++)
        m[f*ncol]=0;

    m[1]= 1;
    for(int f=1; f<=nfil; f++)
    {
        for(int c=1; c<=ncol; c++)
            m[f*ncol+c]=m[f*ncol+c-1]+1;
    }


    for(int f=1; f<=nfil; f++)
    {
        for(int c=1; c<=ncol; c++)
            cout<<m[f*ncol+c]<<" ";
        cout<<endl;
    }

    cout<<endl;
    printreversemi(m,nfil,ncol);

    return 0;
}
