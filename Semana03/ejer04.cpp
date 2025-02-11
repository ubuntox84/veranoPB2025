#include<iostream>
# define N 5
using namespace std; 
void resta(int x, int y){
    int resp;
    resp=x-y;
    x=10;
    cout<<"La resta de "<<x<<"-"<<y<<" = "<<resp;
}
int main(){  
int a=5, b=6;
resta(a,b);
return 0;
}