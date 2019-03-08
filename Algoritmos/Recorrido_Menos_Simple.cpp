#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
const int MAX_SIZE=5;

void printvi(int *values, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<values[i*n+j]<<" ";
        cout<<endl;
    }

}


void printmi(int values[][MAX_SIZE], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<values[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    // 3.3 Recorrido matrices dobles (2)

    srand(time(NULL));

    int pin[MAX_SIZE][MAX_SIZE],i,j,n;
    int cambia[MAX_SIZE*MAX_SIZE];

    cout<<"Introduzca tamano de matriz: ";
    cin>>n;
    cout<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            pin[i][j]= rand() %10;
            cambia[i*n+j]=pin[i][j];
        }
    }

    printvi(cambia,n);
    cout<<endl;
    printmi(pin,n);

    return 0;
}
