#include <iostream>
#include <string>
#include <cstring>
//sum=5+4+3+2+1
using namespace std;

int suma(int x){
    if(x==1)
        return 1;
    else
        return x+suma(x-1);
}
int main() {
    int n=5;
    cout<<suma(5);
return 0;
}