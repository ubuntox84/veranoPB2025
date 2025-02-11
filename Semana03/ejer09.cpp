#include<iostream>
#include<cmath>
using namespace std; 

void potencia(int m,int n,int &po){
    po=pow(m,n);
}
void llenar(int &m){
    cout<<"Escribir un numero: ";
    cin>>m;
}
int main(){  
int m,n,po;
llenar(m);
llenar(n);
potencia(m,n,po);
cout<<"La potencia de "<<m<<" elevado a la "<<n<<" es: "<<po;
return 0;
}