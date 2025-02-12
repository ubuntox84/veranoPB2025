#include<iostream>
#include<string>
using namespace std; 
struct person{
    string name;
    int old;
    float height;
}p;
void mostrar(person p){
    cout<<"Nombre: "<<p.name<<" Edad: "<<p.old<<" Altura: "<<p.height<<endl;
}
int main(){
    person lista[5]; 
    
    lista[0].name="Juan";
    lista[0].old=15;
    lista[0].height=1.73;
    lista[1].name="Manuel";
    lista[1].old=20;
    lista[1].height=1.5;
    lista[2].name="Miguel";
    lista[2].old=22;
    lista[2].height=1.6;
    mostrar(lista[0]);
    mostrar(lista[1]);
    mostrar(lista[2]);
return 0;
}