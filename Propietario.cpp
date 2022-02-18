#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	//atributos
	private : string nit; 
	private : string identificacion;
	
	//constructor
	public : 
	Propietario (){
	}
	
	Propietario(string nom,string ape,string dir, int tel,string fn,string n,string cui) : Persona (nom,ape,dir,fn,tel){nit = n;}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setIdentificacion(string cui){identificacion = cui;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setNacimiento(string fn){nacimiento = fn;}
	
	//get (mostrar)
	string getNit(){return nit;}
	string getIdentificacion(){return identificacion;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	//metodo
	void mostrar(){
		cout<<"___________________________"<<endl;
		cout<<nit<<endl;
		cout<<identificacion<<endl;
		cout<<nombres<<endl;
		cout<<apellidos<<endl;
		cout<<direccion<<endl;
		cout<<telefono<<endl;
		cout<<nacimiento<<endl;
	}
};
