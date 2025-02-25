#include <iostream>
#include <string>
using namespace std;

class Alumno{
    private:
    string codigo;
    string facu;
    string ciclo;
    public:
    Alumno(string c,string f,string ci):codigo(c),facu(f),ciclo(ci){}
    
    string info(){
        return codigo+"\t"+facu+"\t"+ciclo+"\n";
    }
    string setcode(string c){
        this->codigo=c;
    }
};
int main() {
    Alumno a1("0020030471","FIIS","2025-0");
    cout<<a1.info();
    return 0;
}