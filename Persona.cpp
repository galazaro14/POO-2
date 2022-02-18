#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres,apellidos,direccion,nacimiento;
				int telefono;
	//contructor
	protected :
			Persona(){
			}
			Persona(string nom,string ape,string dir,string fn, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				nacimiento = fn;
			}
	//metodo
	void mostrar();			
};
