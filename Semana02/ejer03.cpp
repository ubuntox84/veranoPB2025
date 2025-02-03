#include<iostream>
#include<string>
#define N 7
using namespace std; 
int main(){
    double nota[N];
    double suma, promedio;
    string condicion, notas;
    cout<<"ingresar "<<N<<" notas: ";
    for(int i=0;i<N;i++){
        cin>>nota[i];
        suma+=nota[i];
    }
    promedio=static_cast<double>(suma/N);
    
    for(int x:nota){
        notas=notas+to_string(x)+" ";
    }    
    condicion=((promedio<=10.5)?"Desaprobado":"Aprobado");
    cout<<"El estudiante tiene las calificaciones: "<<notas
    <<" su promedio es "<<promedio<<" el esta; "<<condicion;
    return 0;
}