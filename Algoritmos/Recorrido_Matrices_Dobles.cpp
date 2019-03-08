#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

//3.2 Recorrido menos simple (2)

void altera_colorpar(int **colorfondo, int maxsize)
{
    for(int i=0; i<maxsize; i++)
    {
        for(int j=0; j<maxsize; j++)
        {
            if(colorfondo[i][j]>=10)
                colorfondo[i][j]-=10;
        }
    }

}

void imprint_colorpar(int **colorfondo,int maxsize)
{
    int i,j;
    for(i=0; i<maxsize; i++)
    {
        for(int j=0; j<maxsize; j++)
            cout<<colorfondo[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    srand(time(NULL));
    const int maxsize=5;
    int ** pi,i,j;
    pi= new int * [maxsize];
    for (i=0; i<maxsize; i++)
        pi[i] = new int[maxsize];

    for(i=0; i<maxsize; i++)
    {
        for(j=0; j<maxsize; j++)
            pi[i][j] = rand() % 256;
    }
    cout<<"    Antes"<<endl<<endl;
    imprint_colorpar(pi,maxsize);
    altera_colorpar(pi,maxsize);
    cout<<endl;
    cout<<"    Despues"<<endl<<endl;
    imprint_colorpar(pi,maxsize);

    return 0;
}
