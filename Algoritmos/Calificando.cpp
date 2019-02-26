#include <iostream>
#define NUM_MAX 100
using namespace std;

double califica(double serie[NUM_MAX],int n){
    int i;
    double mid=0;
    for( i=0;i<n;i++){
       mid+=serie[i];
    }
    mid/=n;
    if (mid == 10)
      cout << "MH" << endl;
        else if (mid >=9)
              cout << "SOB" << endl;
             else if (mid >= 7)
                   cout << "NOT" << endl;
                  else if(mid >= 6)
                        cout << "BIEN" << endl;
                       else if (mid >= 5)
                             cout << "APRO" << endl;
                            else cout << "SUS" << endl;
    return mid;
}

int main(){
    int num,i;
    double notas[NUM_MAX];
    do{
        cout<<"Introduzca el numero de estudiantes(max 100): ";
        cin>>num;
        if( num<=0 || num>100 )
            cout<<"Introduzca el numero maximo 100, par favor.."<<endl;
    }while( num<=0 || num>100 );

     cout<<"Introduzca la nota entre del 0-10 !!"<<endl;
     for(i=0; i<num; i++){
       do{ cout << "Introduzca la nota del estudiante numero " << i+1 << ": ";
        cin >> notas[i];
        if(notas[i]>10)
            cout<<"Introduzca la nota maximo 10, par favor.."<<endl;
    }while( notas[i]>10 );
     }

     cout << "La nota media de letra es de: ";
     double media=califica(notas, num);
     cout << "La nota media es de: "<<media;

return 0;
}
