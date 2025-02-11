#include<iostream>
#include<string>
#include<iomanip>
using namespace std; 
int main(){
    float x=0.00015;
    cout<<x<<endl;
    cout<<scientific<<x<<endl;
    cout<<fixed<<setprecision(4)<<x;
return 0;
}