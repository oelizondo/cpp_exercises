class CuentadeAhorros : public CuentaBancaria
{
	public:
		CuentadeAhorros();
		CuentadeAhorros(string n, int cta, double sal);
		bool retira(double cant);
		void deposita(double cant);
};
CuentadeAhorros::CuentadeAhorros () : CuentaBancaria()
{

}
CuentadeAhorros::CuentadeAhorros (string n, int cta, double sal) : CuentaBancaria (n, cta, sal)
{

}
bool CuentadeAhorros::retira(double cant)
{
	if(saldo >= cant){
		saldo -= cant;
		return true;
	}
}
void CuentadeAhorros::deposita(double cant)
{
	saldo += cant;
}
