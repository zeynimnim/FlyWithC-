#include <iostream>
#define MAX_ALUMNOS 100
using namespace std;

void transforma_nota_erasmus(double calificaciones[MAX_ALUMNOS],int n){
    for(int i=0;i<n;i++){
            calificaciones[i]/=4;
    }
}

int main()
{
    int i,num_alumnos;
    double calificaciones[MAX_ALUMNOS];
    do{
      cout<<"Introduzca el numero de alumnos(maximo 100): ";
      cin>>num_alumnos;
      if(num_alumnos>100 || num_alumnos<=0)
            cout<<"Introduzca el numero entre del 0-100, por favor"<<endl;
    }while(num_alumnos<=0 || num_alumnos>100);

    cout<<"notas del 0-20 !!"<<endl;
    for(i=0;i<num_alumnos;i++){
      do{
      cout<<"Introduzca la nota del alumnos numero "<<i+1<<" : ";
      cin>>calificaciones[i];
      if(calificaciones[i]<0 || calificaciones[i]>20)
        cout<<"Introduzca la nota del 0-20, por favor"<<endl;
    }while(calificaciones[i]<0 || calificaciones[i]>20);
    }

  transforma_nota_erasmus(calificaciones,num_alumnos);

  cout<<endl;
  cout<<"Notas en nueva form.. "<<endl<<endl;
  for(i=0;i<num_alumnos;i++){
    cout<<" El nota de alumnos numero "<<i+1<<": "<<calificaciones[i]<<endl;
  }

    return 0;
}

