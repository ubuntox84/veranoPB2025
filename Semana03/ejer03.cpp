#include<iostream>
# define N 5
using namespace std; 
int resta(int x, int y){
    int resp;
    resp=x-y;
    return resp;
}
int main(){  
int a=5, b=6;
int r=resta(a,b);
cout<<"La resta de "<<a<<"-"<<b<<" = "<<r;
return 0;
}