#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    cout << "Hola" << endl;
    Sleep(1000);
    cout<<"Pulse cualqier tecla para continuar";
    cin.ignore();
    system("CLS");
    cout<<"Adios..";
    return 0;
}
