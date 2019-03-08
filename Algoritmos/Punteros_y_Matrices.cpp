#include <iostream>

using namespace std;

int main()
{
    // 3 Parte 2: Punteros y matrices (8)
    // 3.1 Recorrido simple (1)

    // para convertir las calificaciones negativas en cero
    const int max_alumnos = 6;
    int calificaciones[max_alumnos] = {7, 5, -1, 5, -2, 5};
    int *p=calificaciones;

    for(p; p<calificaciones+max_alumnos; p++)
    {
        if(*p < 0 )
            *p = 0;
    }
    p = calificaciones;
    for(p; p<calificaciones+max_alumnos; p++)
    {
        cout<<*p<<" ";
    }

    cout<<endl;


    return 0;
}
