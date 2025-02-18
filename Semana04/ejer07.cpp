#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int factorial(int x){
    if(x==0) 
        return 1;
    else
        return x*factorial(x-1);

}
int main() {
    int n=5;
    cout<<factorial(n);
return 0;
}