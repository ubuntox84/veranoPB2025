#include<iostream>

using namespace std; 
int main(){
    int x;
    x=10;
    cout<<"Valor: "<<x<<endl;
    cout<<"Address: "<<&x<<endl;
    int *p;
    p=&x;
    cout<<"Valor: "<<p<<endl;
    cout<<"valor que contiene"<<*p<<endl;

    cout<<"Direccion del puntero "<<&p;

   

return 0;
}