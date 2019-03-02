#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    //uso new de monton
    int *p,q=32;
    cout<<"Introduzca un numero: "<<endl;
    cin>>q;
    p= new int;
    p=&q;
    //..operaciones..
    delete p;


    //uso malloc de monton(heap)
    int *cadena,n,i;
    cadena=(int*)malloc(n*(sizeof(int)));
    cout<<"Introduzca numeros de elementos: "<<endl;
    cin>>n;
    for(i=0;i<n;++i)
    cadena[i]= 2*i;
    //..operaciones..
    //tiempo de descargar monton
    free(cadena);

//Heap'a erisme mantiginda kullandigimiz yeri sonradan serbest birakmak vardir
//Eger serbest birakmiyacaksak malloc, new kullanmanin hiçbir anlami yoktur
//Cunku free,delete ifadeleri malloc,new olmadan dogru calýsmamaktadýr.

    return 0;
}
