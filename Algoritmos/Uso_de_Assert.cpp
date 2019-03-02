#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    assert(2+2==4);
    cout<<"La ejecucion continua mas alla de la primera afirmacion"<<endl;
    assert(2+2==5);
    cout<<"La ejecucion continua mas alla de la primera afirmacion"<<endl;

    return 0;
}
