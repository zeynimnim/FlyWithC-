#include <iostream>

using namespace std;

struct Polinomio
{
    double *valores;
    int grado;
};

Polinomio Derivada_Polinomio(const Polinomio &pol){
  Polinomio result;
  int i;

  result.grado = pol.grado-1;
  result.valores = new double[result.grado];

  for(i=0;i< result.grado;i++){
    result.valores[i]=pol.valores[i+1]*(i+1);
  }

  return result;
}

void A_Ver_Polinomio(const Polinomio &derivada){
    int i=0;

    for(i=derivada.grado-1;i>=0;i--){
        if (i!=derivada.grado)
        cout<<derivada.valores[i]<<"x^"<<i<<" + ";
       else
        cout<<derivada.valores[i]<<"x^"<<i;
    }
}

int main()
{
    int n=5;
    Polinomio polinom;
    polinom.valores= new double[n];
    polinom.grado= 5;
    polinom.valores[0]=-7;
    polinom.valores[1]=3;
    polinom.valores[2]=5;
    polinom.valores[3]=0;
    polinom.valores[4]=1;

    A_Ver_Polinomio(polinom);

    Polinomio derivada = Derivada_Polinomio(polinom);
    cout<<endl;
    A_Ver_Polinomio(derivada);



    return 0;
}
