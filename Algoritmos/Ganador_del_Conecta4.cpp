#include <iostream>
#include <windows.h>//incluido para comandos de Sleep y "cls"
#include <string>  //incluido para obtener la string
#define X 4

using namespace std;

int ganador (int tablero[X][X]){
    if (   ((tablero[0][0]==1)&&(tablero[0][1]==1)&&(tablero[0][2]==1)&&(tablero[0][3]==1))  ||
           ((tablero[0][3]==1)&&(tablero[1][3]==1)&&(tablero[2][3]==1)&&(tablero[3][3]==1))  ||
           ((tablero[3][0]==1)&&(tablero[3][1]==1)&&(tablero[3][2]==1)&&(tablero[3][3]==1))  ||
           ((tablero[0][0]==1)&&(tablero[1][0]==1)&&(tablero[2][0]==1)&&(tablero[3][0]==1))  ||
           ((tablero[0][2]==1)&&(tablero[1][2]==1)&&(tablero[2][2]==1)&&(tablero[3][2]==1))  ||
           ((tablero[0][1]==1)&&(tablero[1][1]==1)&&(tablero[2][1]==1)&&(tablero[3][1]==1))  ||
           ((tablero[2][0]==1)&&(tablero[2][1]==1)&&(tablero[2][2]==1)&&(tablero[2][3]==1))  ||
           ((tablero[1][0]==1)&&(tablero[1][1]==1)&&(tablero[1][2]==1)&&(tablero[1][3]==1))  ||
           ((tablero[0][3]==1)&&(tablero[1][2]==1)&&(tablero[2][1]==1)&&(tablero[3][0]==1))  ||
           ((tablero[0][0]==1)&&(tablero[1][1]==1)&&(tablero[2][2]==1)&&(tablero[3][3]==1))
        )
            return 1;
    else if (   ((tablero[0][0]==2)&&(tablero[0][1]==2)&&(tablero[0][2]==2)&&(tablero[0][3]==2))  ||
                ((tablero[0][3]==2)&&(tablero[1][3]==2)&&(tablero[2][3]==2)&&(tablero[3][3]==2))  ||
                ((tablero[3][0]==2)&&(tablero[3][1]==2)&&(tablero[3][2]==2)&&(tablero[3][3]==2))  ||
                ((tablero[0][0]==2)&&(tablero[1][0]==2)&&(tablero[2][0]==2)&&(tablero[3][0]==2))  ||
                ((tablero[0][2]==2)&&(tablero[1][2]==2)&&(tablero[2][2]==2)&&(tablero[3][2]==2))  ||
                ((tablero[0][1]==2)&&(tablero[1][1]==2)&&(tablero[2][1]==2)&&(tablero[3][1]==2))  ||
                ((tablero[2][0]==2)&&(tablero[2][1]==2)&&(tablero[2][2]==2)&&(tablero[2][3]==2))  ||
                ((tablero[1][0]==2)&&(tablero[1][1]==2)&&(tablero[1][2]==2)&&(tablero[1][3]==2))  ||
                ((tablero[0][3]==2)&&(tablero[1][2]==2)&&(tablero[2][1]==2)&&(tablero[3][0]==2))  ||
                ((tablero[0][0]==2)&&(tablero[1][1]==2)&&(tablero[2][2]==2)&&(tablero[3][3]==2))
          )
            return 2;
         else return 3;
}


void espectaculo_tablero(int matriz[X][X]){
    cout<<endl;
     for(int i=0;i<X;i++){
        for(int j=0;j<X;j++){
            cout<< matriz[i][j]<<" ";
        }
       cout<<endl;
     }
}

void juega(int matriz[X][X],int eleccion){
    int linea,columna;
 do {
    do {
    cout<<"Selecciona una linea entre del 1-4, por favor: ";
    cin>>linea;
    cout<<"Selecciona una columna entre del 1-4, por favor: ";
    cin>>columna;
    if ( linea<1 || linea>X || columna<1 || columna>X)
    cout<<"Selecciona falso !!"<<endl;
    }while(linea<1 || linea>X || columna<1 || columna>X  );
    if (matriz[linea-1][columna-1] != 0)
        cout<<"Selecciona una caja vacio, por favor!!"<<endl;
  }while((matriz[linea-1][columna-1] != 0));
   matriz[linea-1][columna-1]= eleccion;
}

int main()
{

   int i,j,eleccion,contar=0,matriz[X][X];
   for(i=0;i<X;i++){
    for(j=0;j<X;j++){
        matriz[i][j]=0;
    }
   }


   std::string nombre_1,nombre_2;
   cout<<"*** Bienvenido a juego de conecta 4 ***" <<endl;
   cout<<"jugador uno: ";
   std::getline(std::cin,nombre_1);
   cout<<"jugador dos: ";
   std::getline(std::cin,nombre_2);
   system("CLS");

   do{
    cout<<endl;
    cout<<"Turno de "<<nombre_1<<endl;;
    eleccion=1;
   juega(matriz,eleccion);

    cout<<endl;


   Sleep(1000);
   system("CLS");
    espectaculo_tablero(matriz);
    if (ganador(matriz)==1 )
     cout <<endl<<"** Ganador es ==>> "<<nombre_1<<endl;
     else {
         cout<<endl;
         cout<<"Turno de "<<nombre_2<<endl;
         eleccion=2;
         juega(matriz,eleccion);
         espectaculo_tablero(matriz);
     if (ganador(matriz)==2 )
     cout <<endl<<"** Ganador es ==>> "<<nombre_2<<endl;
     }
     contar++;
  }while(ganador(matriz)==3 && contar<8);
  if (contar==8)
    cout <<endl<<"** No Ganadores, amistad ganada!! "<<endl;
  cout<<endl<<endl<<"-------------  EL FIN -------------"<<endl;
    return 0;
}
