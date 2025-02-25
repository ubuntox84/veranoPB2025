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
    string info(){
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
int main() {
    Persona p1;
    p1.setname("Juan");
    p1.setspell("Garcia");
    p1.setgenero("Masculino");
    p1.setid("22234567");

    
    cout<<p1.info();

    cout<<"DNI: "<<p1.getid()<<endl;
    cout<<"Nombre: "<<p1.getname();
    return 0;
}