#ifndef CtaBan.h
#define CtaBan.h

//Clase abstraca Cuenta Bancaria

class CuentaBancaria
{
	public:
		CuentaBancaria();
		CuentaBancaria(string n, int cta, double sal);
		void consultaSaldo();
		virtual bool retira (double cant) = 0;
		virtual void deposita (double cant) = 0;
	protected:
		string nombre;
		int numCta;
		double saldo;
};
CuentaBancaria::CuentaBancaria()
{
	nombre = "N/A";
	numCta = 0;
	saldo = 0;
}
CuentaBancaria::CuentaBancaria(string n, int cta, double sal)
{
	nombre = n;
	numCta = cta;
	saldo = sal;
}
bool CuentaBancaria::retira(double cant)
{
	return(saldo>cant)?true:false;
	saldo -= cant;
}
void CuentaBancaria::deposita(double cant)
{
	saldo += cant;
}
void CuentaBancaria::consultaSaldo()
{
	cout << saldo << endl;
}

#endif
