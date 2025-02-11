#include<iostream>
using namespace std; 
void resta(int x, int y, int &r){
    r=x-y;   
}
int main(){  
int a=5, b=6, resp=0;
resta(a,b,resp);
cout<<"La resta de "<<a<<"-"<<b<<" = "<<resp;
return 0;
}