#include <iostream>
#include <string>
#include <cstring>

using namespace std;

inline void suma(int x=5, int y=6, int z=3){
    cout<<"La suma es"<<(x+y+z);
}

int main() {
    suma(10,2,9);
return 0;
}