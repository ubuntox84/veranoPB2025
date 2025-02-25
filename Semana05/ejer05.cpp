#include <iostream>
#include <string>
using namespace std;
class Vehiculo{
    private:
    string marca;
    string modelo;
    public:
    Vehiculo(string, string);
    string detalleVehiculo();
};
Vehiculo::Vehiculo(string ma, string mo):marca(ma),modelo(mo){}
string Vehiculo::detalleVehiculo(){
        return "Marca: "+this->marca+"\nModelo: "+this->modelo;
    }
class Coche:public Vehiculo{
    private:
    string tipo_motor;
    public:
    Coche(string,string,string);
    void detalle ();
};
Coche::Coche(string ma,string mo,string ti):Vehiculo(ma,mo),tipo_motor(ti){}
void Coche::detalle(){
    cout<<detalleVehiculo()+"\nTipo de motor: "<<this->tipo_motor;
}
int main() {
    Coche c1("Toyota","HILUX","Electrico");
    c1.detalle();
    return 0;
}