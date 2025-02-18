#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void suma(){
    cout<<"La suma es";
}
void suma(int x){
    cout<<"La suma es"<<x;
}
void suma(int x, int y){
    cout<<"La suma es"<<(x+y);
}
void suma(int x, int y, int z){
    cout<<"La suma es"<<(x+y+z);
}
int main() {
    suma(5,6,5);
return 0;
}