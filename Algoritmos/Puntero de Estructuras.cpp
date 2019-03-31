#include<iostream>

using namespace std;

struct Course
{
    string name;
    Course **requisites;
    int num_requisites;
};

//Onem teskıl eder: Bir fonksiyonda iç fonksiyon kullanacaksan önceden iç fonksiyonu yukarda hazırlaman lazım
/*void mydepts(const Course &course){
 for(int i=0;i<course.num_requisities;i++){
    cout<<*(&course.requisites[i]->name)<<endl;
 }
}*/

string *mydepts(const Course &course){

  string *ret= new string[course.num_requisites];
    for(int j=0; j < course.num_requisites; j++){
      *(ret+j)=course.requisites[j]->name;
      cout << *(ret+j) << endl;
    }
}

void inicializarCursos(Course *&cursos, int &size){

//Forma una de acceder a valor
  cursos[0].name = "FP";
  cursos[1].name = "MP";
  cursos[2].name = "CAL";
  cursos[3].name = "ED";

//Forma 2 de acceder al valor
  *(&cursos[0].num_requisites) = 1;
  *(&cursos[1].num_requisites) = 0;
  *(&cursos[2].num_requisites) = 0;
  *(&cursos[3].num_requisites) = 2;

  for(int i=0; i<size; i++)
    cursos[i].requisites= new Course *[cursos[i].num_requisites];

  cursos[0].requisites[0]= &cursos[1];
  cursos[3].requisites[0]= &cursos[0];
  cursos[3].requisites[1]= &cursos[1];

  //Mostramos los nombres de las asignaturas y los nombres de sus prerequisitos
  for(int i=0;i<size;i++){
    cout <<endl;
    cout<< cursos[i].name <<" Requisitios: "<<endl<<endl;
    *mydepts(cursos[i]);
  }
}



int main()
{
    int size=4;
    Course *cursos=NULL;
    cursos= new Course[size];
    inicializarCursos(cursos,size);

    return 0;
}
