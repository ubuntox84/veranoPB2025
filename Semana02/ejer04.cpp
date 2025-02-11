#include<iostream>
#include<string>
#define N 5
using namespace std; 
struct alumno{
    string name;
    string code;
    string faculty;
    int old;
}n,m;
int main(){
    int cont=0;
    alumno x={"Luis","0020245610","FIIS",17};
    alumno lista[N]={{"Luis","0020245610","FIIS",17},
    {"Miguel","0020245610","FIIS",25},
    {"Antonio","0020245610","FIIS",30},
    {"Pepe","0020245610","FIIS",18},
    {"Lucho","0020245610","FIIS",20}};
    
    for(alumno p:lista){
        cout<<p.name<<" "<<p.faculty<<" "<<p.code<<" "<<p.old<<endl;
    }
    // imprimir una lista de alumnos mayores a 18 años
    //motrar el nuero de menor de edad 
    cout<<"Lista de alumnos mayores de edad"<<endl;
    for(alumno p:lista){
        if(p.old>=18)
            cout<<p.name<<" "<<p.faculty<<" "<<p.code<<" "<<p.old<<endl;
        else
            cont++;
    }
    cout<<endl<<"El numero de menores de edad son: "<<cont;

    return 0;
}