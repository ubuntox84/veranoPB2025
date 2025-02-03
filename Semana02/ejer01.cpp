#include<iostream>
using namespace std; 
int main(){
    char name[100];
    cout<<"Ingresa tus nombres: ";
    cin.getline(name,100);
    cout<<"hola "<<name;
    return 0;
}