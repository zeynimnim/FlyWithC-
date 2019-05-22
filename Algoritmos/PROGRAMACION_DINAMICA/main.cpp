#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char *argv[])//argc kaç tane argumento açılacağı
{
    int **matris;
    int fil,col;

    ifstream f(argv[1]);
    if(!f)
        cerr<<"No se puede abrir el fichero"<<endl;
    f>>fil;
    f>>col;

    matris = new int *[fil];
    for(int i=0; i<fil; i++ )
        matris[i]= new int[col];

    for(int i=0; i<fil; i++)
    {
        for(int j=0; j<col; j++)
        {
            f>>matris[i][j];
        }
    }

    cout<<"RIESGOS DE PARCELAS DE MONTANA."<<endl<<endl;
    for(int i=0; i<fil; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<matris[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int inicio = matris[fil/2][0];
    matris[fil/2-1][1]+=inicio;
    matris[fil/2][1]+=inicio;
    matris[fil/2+1][1]+=inicio;


    int j=2;
    for(; j<col; j++)
    {
        int i=0;
        for(; i<fil; i++)
        {
            int minimo = matris[i][j-1];
            if ((i>0) && (matris[i-1][j-1]<minimo))
                minimo = matris[i-1][j-1];
            if ((i<fil-1) && (matris[i+1][j-1]<minimo))
                minimo = matris[i+1][j-1];

            matris[i][j]+= minimo;

        }
    }
    /* TABLA DE PESA
        for(int i=0;i<fil;i++){
            for(int j=0;j<col;j++){
                cout<<matris[i][j]<<" ";
            }
            cout<<endl;
        }*/

    int mini = matris[0][col-1];
    for(int i=1; i<fil; i++ )
        if(matris[i][col-1] < mini)
            mini = matris[i][col-1];

    cout<<"RIESGO TOTAL DEL CAMINO MINIMO."<<endl<<endl;
    cout<<mini<<endl;
    return 0;
}
