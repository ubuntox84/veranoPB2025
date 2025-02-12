#include<iostream>
#include<string>
using namespace std; 
int main(){ 
    string cad="FIIS "; 
    string cad1="- UNAS";
    cad=cad+cad1;
    int x;
    cout<<"Nro de caracteres: "<<cad.length()<<endl;
    for(int i=0;i<cad.length();i++){
        cout<<cad[i]<<"\t";
        x=cad[i];
        cout<<"codigo asciii: "<<x<<endl;
        char p=x;
    }
    return 0;
}