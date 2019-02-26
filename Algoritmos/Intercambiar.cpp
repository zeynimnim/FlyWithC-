#include <iostream>

using namespace std;

void Swap(char &c1, char &c2){
   char tmp=c1;
   c1=c2;
   c2=tmp;
}

int main()
{
    char a='a' ,b='b';
    Swap(a,b);
    cout << "a= " << a << " y b= " << b << endl;
    return 0;
}
