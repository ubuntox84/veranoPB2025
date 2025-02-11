#include<iostream>
#include<string>

using namespace std; 
int main(){
    int x,y;
    x++;
    y+=x++;
    {
        int p;
    }
    //la variable p esta en otro ambito.
    y+=p;
return 0;
}