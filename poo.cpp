#include<iostream>
#include<string>
using namespace std;
class persona
{
    private:
        int edad;
        string nombre;
    public:
        persona(int, string);
        void leer();
        void correr();
};
persona::persona(int _edad, string _nombre)
{
    edad=_edad;
    nombre=_nombre;
}
void persona::leer()
{
    cout<<"soy"<<nombre<<"y estoy leyendo un libro"<<endl;
}
void persona::correr()
{
    cout<<"soy"<<nombre<<"y estoy corriendo una maraton y tendo"<<edad<<endl;
}
int main()
{
    persona p1=persona(20, "alejando");
    p1.leer();
    persona p2(19,"mario");
    p2.correr();
    return 0;

}