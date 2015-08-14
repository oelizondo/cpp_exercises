#ifndef persona.h
#define persona.h

class Persona
{
	public:
		Persona();
		Persona(string nombre, int edad);
		void setNombre (string nombre){this->nombre = nombre;};
		void setEdad(int edad){this-> edad = edad;};
		string getNombre(){return nombre;};
		int getEdad(){return edad;};
		virtual void muestra();

	protected:
		string nombre;
		int edad;
};
Persona::Persona()
{
	nombre = "";
	edad = 0;
}
Persona::Persona(string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}
void Persona::muestra()
{
	cout << nombre << " " << edad << endl;
}

#endif