#include<iostream>
using namespace std; 
void cambio(int *x){
    *x=10;   
}
int main(){  
int a=15;
cambio(&a);
cout<<a;
return 0;
}