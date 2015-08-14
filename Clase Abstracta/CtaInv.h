class CuentadeInversion : public CuentaBancaria
{
	public:
		CuentadeInversion();
		CuentadeInversion(string n, int cta, double sal, int porcentaje);
		bool retira(double cant);
		//void consultaSaldo();
		void deposita(double cant);
	protected:
		int porcentaje;
};
CuentadeInversion::CuentadeInversion() : CuentaBancaria()
{
	porcentaje = (10/100);
}
CuentadeInversion::CuentadeInversion(string n, int cta, double sal, int porcentaje) : CuentaBancaria(n, cta, sal)
{
	this->porcentaje = porcentaje;
}
void CuentadeInversion::deposita(double cant)
{
	saldo+= cant;
}
bool CuentadeInversion::retira(double cant)
{
	if (saldo >= cant){
		saldo -= cant;
		return true;
	}
}
