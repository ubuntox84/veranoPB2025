#include <iostream>
#include <string>
#define N 5
using namespace std;
class Estudiante{
    private:
    string name;
    double notas[N];
    double acumulador;
    public:
    Estudiante(string, double[N]);
    double promedio();
    string getname();
    string getnotas();
};
Estudiante::Estudiante(string n, double no[N]){
    this->acumulador=0;
    this->name=n;
    for(int i=0;i<N;i++){
        this->notas[i]=no[i];
        acumulador+=notas[i];
    }
}
double Estudiante::promedio(){
    return acumulador/N;
}
string Estudiante::getname(){
    return this->name;
}
string Estudiante::getnotas(){
    string cad="";
    for(int i=0;i<N;i++){
        cad=cad+"\t"+to_string(this->notas[i]);
    }
    return cad;
}
int main() {
    double n[]={12.,11.,10.5,7.,.6};
    Estudiante p("Martin",n);
    cout<<"Nombre: "<<p.getname()<<"\nNotas: "<<p.getnotas()
    <<"\nPromedio"<<p.promedio();
    return 0;
}