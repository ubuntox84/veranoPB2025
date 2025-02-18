#include <iostream>
#include <string>
#include <cstring>

using namespace std;

union rama{
    char name[100];
    int code;
    int age;
}p;

int main() {
    strcpy(p.name, "Jose");
    p.code=10;
    p.age=15;
    cout<<p.name<<"\t ";
    cout<<p.code;
    return 0;
}