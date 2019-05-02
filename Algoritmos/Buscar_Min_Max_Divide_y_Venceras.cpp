#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

void funcion(const int *v, int &bajo, int &alto, int &minimo, int &maximo,int &indice_min, int &indice_max)
{
    if (bajo == alto)
    {
        //   minimo = min(minimo,*(v+bajo));
        if ( *(v+bajo) < minimo )
        {
            minimo = *(v+bajo);
            indice_min = bajo;
        }
        // maximo = max(maximo,*(v+bajo));
        else if ( *(v+bajo) > maximo)
        {
            maximo = *(v+bajo);
            indice_max = bajo;
        }

    }
    else if (bajo == alto-1)
    {
        // minimo = min(minimo,min(*(v+bajo),*(v+alto)));
        if (*(v+bajo) < *(v+alto))
        {
            if (*(v+bajo) < minimo )
            {
                minimo = *(v+bajo);
                indice_min = bajo;
            }
        }
        else if (*(v+alto) < minimo)
        {
            minimo = *(v+alto);
            indice_min = alto;
        }

        //maximo = max(maximo,max(*(v+bajo),*(v+alto)));
        if (*(v+bajo) > *(v+alto))
        {
            if (*(v+bajo) > maximo )
            {
                maximo = *(v+bajo);
                indice_max = bajo;
            }
        }
        else if (*(v+alto) > maximo)
        {
            maximo = *(v+alto);
            indice_max = alto;
        }

    }
    else
    {
        int medio = (bajo + alto)/2;
        funcion(v,bajo,medio,minimo,maximo,indice_min,indice_max);
        medio++;
        funcion(v,medio,alto,minimo,maximo,indice_min,indice_max);
    }
}


int main()
{
std::clock_t c_start = std::clock();
    int v[]= {5,19,30,904,13,54,3};
    int minimo = *(v+0);
    int maximo = *(v+0);
    int indice_min = 0;
    int indice_max = 0;
    int bajo = 0;
    int alto = sizeof(v)/sizeof(*(v+0)) - 1;


    funcion(v,bajo,alto,minimo,maximo,indice_min,indice_max);


    cout<<" Chimpun min: "<<minimo<<endl;
    cout<<" Chimpun min posicion: "<<indice_min+1<<endl;
    cout<<" Chimpun max: "<<maximo<<endl;
    cout<<" Chimpun max posicion: "<<indice_max+1<<endl;

    std::clock_t c_end = std::clock();

    std::cout <<endl<< std::fixed << std::setprecision(2) << "CPU time used: "
              << 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC << " ms\n";

return 0;
}
