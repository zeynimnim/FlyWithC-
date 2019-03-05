#include <iostream>  //3 tane fonksiyonum kaldý onlarý da devam etçem inþ
#include <string>

using namespace std;
const int MAXASIG=50;

struct Asignatura
{
    int curso;
    string name;
};

struct Estudiante
{
    string nombre;
    string email;

    float calificaciones[MAXASIG];
    Asignatura asignaturas[MAXASIG];

    /*
    void matricula(const string name, int curso);
    bool acta(string asignatura, float calificacion);*/
} alumnos[MAXASIG];

void creaEstudiante(Estudiante *alumnos,string name, string correo)
{
    static int z=2;
    alumnos[z].nombre=name;
    alumnos[z].email=correo;
    z++;
}

void matricula(Estudiante *alumnos,string name, int curso,int i,int p)
{
    alumnos[i].asignaturas[p].name=name;
    alumnos[i].asignaturas[p].curso=curso;
}

void acta(Estudiante *alumnos,float calificacion,int i,int p)
{
    alumnos[i].calificaciones[p]=calificacion;
}

void printEstudiante(Estudiante *alumnos,int m)
{
    cout<<"Alumno: "<<alumnos[m].nombre<<endl;
    cout<<"Email: "<<alumnos[m].email<<endl;
    cout<<"---"<<endl;
    int j=0;
    do
    {
        cout<<"Asignatura: "<<alumnos[m].asignaturas[j].name<<endl;
        cout<<"Curso: "<<alumnos[m].asignaturas[j].curso<<endl;
        if (alumnos[m].calificaciones[j]!=-1)
            cout<<"Calificacion: "<<alumnos[m].calificaciones[j]<<endl;
    }
    while(alumnos[m].calificaciones[j]== -1);
    cout<<"---"<<endl;
}

int main()
{

    Estudiante carlos= {"Carlos","cxxx@gmail.com"};
    Estudiante maria= {"Maria","mxxxx@gmail.com"};
    alumnos[0]=carlos;
    alumnos[1]=maria;
    char flag='n';
    do
    {
        cout<<"¿Te gustaria instaducir estudiantes en el sistema? s/n"<<endl;
        cin>>flag;
        if (flag=='s')
        {
            string name,correo;
            cout<<"Introduzca nombre de estudiante: ";
            cin>>name;
            cout<<"Introduzca email de estudiante: ";
            cin>>correo;
            creaEstudiante(alumnos,name,correo);
            cout<<endl;
        }
        else if((flag!='s') && (flag!='n'))
        {
            cout<<"Eleccion Equivocada,selecciona de nuevo por favor"<<endl;
            cout<<endl;
        }

    }
    while(flag!='n');



    int i=0;
    do
    {
        cout<<"¿Te gustaria matricular estudiantes en las asignaturas? s/n"<<endl;
        cin>>flag;
        if (flag=='s')
        {

            cout<<"Sobre de "<<alumnos[i].nombre<<endl;
            char flag2= 'n';
            int p=0;
            do
            {

                string nam;
                int curso;
                cout<<"Introduzca nombre de asignatura: ";
                cin>>nam;
                cout<<"Introduzca curso de "<<nam<<" : ";
                cin>>curso;
                matricula(alumnos,nam,curso,i,p);
                cout<<endl;
                    float califica;
                    cout<<"Introduzca la calificacion : ";
                    cin>>califica;
                    acta(alumnos,califica,i,p);

                cout<<"¿Te gustaria matricula "<<alumnos[i].nombre<<" a en la otra asignaturas? s/n"<<endl;
                cin>>flag2;
                if((flag2!='s') && (flag2!='n'))
                {
                    cout<<"Eleccion Equivocada,selecciona de nuevo por favor"<<endl;
                    cout<<endl;
                    p++;
                }
            }
            while(flag2!='n');
        }
        else if((flag!='s') && (flag!='n'))
        {
            cout<<"Eleccion Equivocada,selecciona de nuevo por favor"<<endl;
            cout<<endl;
        }
        i++;
    }
    while(flag!='n');


    string nombre;
    cout<<"Introduzca el nombre del alumno cuyo conocimiento desea ver: ";
    cin>>nombre;
    int m=0;
    while((m<i) && (alumnos[m].nombre == nombre))
    {
        m++;
    }
    m--;
    printEstudiante(alumnos,m);


    return 0;
}




