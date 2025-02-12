#include<iostream>
#include<string>
using namespace std; 
struct person{
    string name;
    int old;
    float height;
}p;
void mostrar(person p){
    cout<<"Nombre: "<<p.name<<" Edad: "<<p.old<<" Altura: "<<p.height;
}
int main(){
    person p2; 
    p2.name="Juan";
    p2.old=15;
    p2.height=1.73;
    mostrar(p2);
return 0;
}