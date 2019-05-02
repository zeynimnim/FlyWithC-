#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

int main()
{
    std::clock_t c_start = std::clock();

    int maximo,minimo,indice_maximo,indice_minimo,n=7;
    int v[n]= {5,19,30,904,13,54,3};
    maximo=5;
    indice_maximo= 0;
    minimo=5;
    indice_minimo= 0;


        for(int j=0;j<n-1;j++){
            if(v[j+1]>maximo){
              maximo= v[j+1];
              indice_maximo=j+1;
              }
            else if(v[j+1]< minimo){
              minimo= v[j+1];
              indice_minimo=j+1;
              }
        }

        cout<<" chimpun max: "<<maximo<<endl;
        cout<<" chimpun max posicion: "<<indice_maximo+1<<endl;
        cout<<" chimpun min: "<<minimo<<endl;
        cout<<" chimpun min posicion: "<<indice_minimo+1<<endl;

    std::clock_t c_end = std::clock();

    std::cout <<endl<< std::fixed << std::setprecision(2) << "CPU time used: "
              << 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC << " ms\n";

    return 0;
}
