#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int **matriz,*sum,fil,col,i,j;

    cout<<"Introduzca el numero de files de la matriz: ";
    cin>>fil;
    matriz= new int *[fil];
    cout<<"Introduzca el numero de columnos de la matriz: ";
    cin>>col;
    sum= new int [col];

    cout<<endl;
    for(i=0; i<fil; i++)
        matriz[i]=new int [col];

    for(i=0; i<col; i++)
        sum[i]=0;

    //Asignacion de valor aleatorio
    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {
            matriz[i][j]= rand()%10;
            sum[j]+= *(*(matriz+i)+j);
        }
    }

    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
            cout<<*(*(matriz+i)+j)<<" ";
        cout<<endl;
    }


    int max=sum[0];
    int indices_max=0;
    for(i=0; i<col; i++)
    {
        if(*(sum+i) > max)
        {
            max= *(sum+i);
            indices_max= i;
        }
    }

    cout<<endl<<"La columna que tuvo la maxima suma => (0,1,2,..) "<<indices_max;


    free(matriz);
    free(sum);
    return 0;
}
