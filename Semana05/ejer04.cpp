#include <iostream>
#include <string>
using namespace std;
class Persona{
    //atributo
    private:
    string name;
    string spell;
    string genero;
    string id;
    //metodos.
    //get y set
    public:
    Persona (string n,string s, string g, string i):name(n),spell(s),genero(g),id(i){}
    string infopersona(){
        return name+"\t"+spell+"\t"+genero+"\t"+id+"\n";
    }
    void setname(string n){
        this->name=n;
    }
    void setspell(string s){
        this->spell=s;
    }
    void setgenero(string g){
        this->genero=g;
    }
    void setid(string i){
        this->id=i;
    }
    string getid(){
        return this->id;
    }
    string getname(){
        return this->name;
    }
};
class Alumno: public Persona{
    private:
    string codigo;
    string facu;
    string ciclo;
    public:
    Alumno(string n,string s, string g, string i, string c,string f,string ci):Persona(n,s,g,i),codigo(c),facu(f),ciclo(ci){}
    
    string infoalumno(){
        return infopersona()+"\t"+codigo+"\t"+facu+"\t"+ciclo+"\n";
    }
    string setcode(string c){
        this->codigo=c;
    }
};
int main() {
    Alumno a1("Juan","Garcia","M","561019","0020030471","FIIS","2025-0");
    cout<<a1.infoalumno();
    return 0;
}