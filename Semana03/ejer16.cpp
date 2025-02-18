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
    for(person &p: lista){        
        cout<<"ingresar Nombre:";
        getline(cin,p.name);
        cout<<"ingresar Edad:";
        cin>>p.old;
        cin.ignore();
        cout<<"ingresar Altura:";
        cin>>p.height;
        cin.ignore();
        
    }
    for(person p: lista){
    mostrar(p);
    }
return 0;
}