#include <iostream> //./sudoku es argc1 , text1.txt text2.xt argc2 oluyo biri okumak biri yazmak ise
#include <fstream>//dosyayla işlemde dinamik matris kullan
//#include <cassert> Bu sadece kodu yaznaın hatalarını görmesi için, dosya işlemlerinde kullanılmaz

using namespace std; //bir de if 1 cümle olsun olmasın hep cocrchete koy :)

int main( int argc, char *argv[]) //para pasar otra argumento
{
    //  int matris[MAX_FIL][MAX_COL];
    int **matris;
    int **auxiliar;
    int fil;
    int col;

    //ifstream f("text.txt");
    ifstream f(argv[1]);//leer, programımıza textten input alıyoz
    ofstream o(argv[2]);//escribir, programımızın outputunu texte veriyoz
    if(!f)
    {
        cerr<<"No se puede abrir el fichero"<<endl;
        return 1; // program düzgün çalışıyorsa 0 a döner, çalışmıyorsa 1 e döner.
      //  assert(argv[1]);
    }
    f>>fil; //cin tenemos que meterlo
    f>>col;

    matris = new int *[fil]; //creando un vector de punteros
    for(int i=0; i <fil; i++)
    {
        matris[i] = new int [col];//un vector
    }


    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j< col; j++)
        {
            // f>> *(*(matris + i*col)+ j ); bu dizi şeklinde matris yaparsan olur ki genelde yukardaki şekilde
            //matris oluşturacağım için bu şekilde erişmeyeceğimzi:)
            f>> matris[i][j];
        }
    }

    auxiliar = new int *[fil];
    for(int i=0; i<fil; i++)
        auxiliar[i] = new int[col];


    cout<<"RIESGOS DE PARCELAS DE MONTANA."<<endl<<endl;
    for(int i = 0; i < fil; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<matris[i][j]<<" ";
        }
        cout<<endl;
    }

    int current_i = 2;
    int riesgo_total = 0;

   // for(; current_j < col-1; current_j++)
   for(int current_j = 0; current_j < col-1; current_j++)//üsttekini kullanma böyle kullan, başlangı çdeğeri yoksa while kullan
    {

        riesgo_total+= matris[current_i][current_j];
        auxiliar[current_i][current_j] = matris[current_i][current_j];
        int bandera = 0;
        int minimo = matris[current_i][current_j + 1] ;

        if ( (current_i - 1 >= 0) && ( matris[current_i - 1][current_j + 1] < minimo) )
        {
            minimo =  matris[current_i - 1][current_j + 1];
            bandera = 1;

        }

        if ( (current_i + 1 < fil ) && ( matris[current_i + 1][current_j + 1] < minimo) )
        {
            minimo = matris[current_i][current_j + 1];
          //  current_i = current_i + 1;
            bandera = 2;
        }

        if (bandera == 1)
            current_i = current_i - 1;
            current_i = current_i + 1;// burda daha düzenli duruyor

    }

    auxiliar[current_i][col-1] = matris[current_i][col-1];
    riesgo_total+= matris[current_i][col-1];

    if( !o )
    {
        cerr<<" El fichero no se puede abrir"<<endl;
      //  assert(argv[2]);
      return 1;
    }
    else
    {
        for(int i=0; i<fil; i++)
        {
            for(int j=0; j<col; j++)
            {
                o<<auxiliar[i][j];
                o<<" ";
            }
            o<<endl;
        }
    }

    cout<<endl<<"RIESGO TOTAL DEL CAMINO MINIMO."<<endl<<endl<<riesgo_total<< endl;




    return 0;
}
