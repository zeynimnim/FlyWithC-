#include<iostream>

using namespace std;
  const double pi = 3.1415926535897;

struct circulo{
double r;
public:
double calcular_Area(double);
};

int main(){
    circulo C1; //una entity of class
    double radio;
    cout<<"Introduzca el radio del circulo: ";
    cin>>radio;
    C1.r= radio;
    cout<<"La Area del circulo es: "<<C1.calcular_Area(C1.r);
    return 0;
}

double circulo::calcular_Area(double r){
  return pi*r*r;
}

