#include<iostream>
using namespace std; 

void cambio(int *);
char saludo();
int p(int , float );

int main(){  
int a=15;
cambio(&a);
cout<<a;
saludo();
return 0;
}

void cambio(int *x){
    *x=10;   
}
char saludo(){
    return 'H';
}
int p(int a, float e){
    return 0;
}