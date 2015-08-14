
#include "persona.h"

class Estudiante : public Persona
{
	public:
		Estudiante();
		Estudiante(string nombre, int edad, string carrera);
		string getCarrera(){return carrera;};
		void setCarrera(string carrera){this->carrera = carrera;};
		void muestra();
	private:
		string carrera;
};
Estudiante::Estudiante() : Persona()
{
	carrera = "";
}
Estudiante::Estudiante(string nombre, int edad, string carrera): Persona(nombre, edad)
{
	this->carrera = carrera;
}
void Estudiante::muestra()
{
	cout << nombre << " " << edad << " " << carrera << endl; 
}