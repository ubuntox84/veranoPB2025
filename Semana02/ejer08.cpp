#include<iostream>
#include<string>

using namespace std; 
int main(){
   int vect[5]={5,8,7,9,10};
    cout<<vect<<"Valor:"<<*(vect)<<endl;
    cout<<(vect+1)<<"Valor:"<<*(vect+1)<<endl;
    cout<<(vect+2)<<"Valor:"<<*(vect+2)<<endl;
    cout<<(vect+3)<<"Valor:"<<*(vect+3)<<endl;
    cout<<(vect+4)<<"Valor:"<<*(vect+4)<<endl;
return 0;
}