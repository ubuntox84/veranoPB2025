#include <iostream>
#include <string>

using namespace std;

struct studing{
    string name;
    int age;
    float prom;
};
void mostrarStudy(studing l){
    cout<<l.name<<"\t";
    cout<<l.age<<"\t";
    cout<<l.prom<<"\n";
}
void llenar(studing l[], int x){
    for (int i = 0; i < x; i++)
    {
       cout<<"ing. name: ";
       getline(cin,l[i].name);       
       cout<<"Ing. Edad: ";
       cin>>l[i].age;
       cin.ignore();
       cout<<"Ing. Promedio: ";
       cin>>l[i].prom;
       cin.ignore();
    }    
}
void mostrar(studing l[], int x){
    for(int i = 0; i < x; i++){
        mostrarStudy(l[i]);
    }
}
void mayorPromedio(studing l[], int x){
    int mayor=0;
    int y;
    for(int i = 0; i < x; i++){
        if(l[i].prom>mayor){
            mayor=l[i].prom;
            y=i;
        }        
    }
    mostrarStudy(l[y]);
}
void Ordenar(studing l[], int x){
    studing temp;
    for(int i = 0; i < x-1; i++){
        for (int j = i+1; j < x; j++)
        {
            if(l[i].prom<l[j].prom){
                temp=l[i];
                l[i]=l[j];
                l[j]=temp;
            }
        }  
    }    
}

int main() {
    int n;
    cout<<"Ing. nro de estudiantes?";
    cin>>n;
    cin.ignore();
    studing lista[n];
    llenar(lista, n);
    mostrar(lista,n);
    cout<<endl;
    mayorPromedio(lista,n);
    cout<<endl;
    Ordenar(lista,n);
    mostrar(lista,n);
    return 0;
}