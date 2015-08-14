class complejo
{
	public:
		complejo();
		complejo(int normal, int imag);
		void muestra();
		complejo operator+(complejo nImag);
		complejo operator++();
		friend complejo operator-(complejo num1, complejo num2);
	private:
		int normal, imag;
};
complejo::complejo()
{
	normal = 0;
	imag =0;
}
complejo::complejo(int normal, int imag)
{
	this->normal = normal;
	this->imag = imag;
}
complejo complejo::operator+(complejo nImag)
{
	int nuevo = normal + nImag.normal;
	int nuevo1 = imag + nImag.imag;
	complejo respuesta(nuevo, nuevo1);
	return respuesta;
}
complejo complejo::operator++()
{
	normal++;
	imag++;
	return complejo(normal, imag);
}
/*complejo complejo::operator-(complejo num1, complejo num2)
{
	int nuevo = num1.normal - num2.normal;
	int nuevo1 = num1.imag - num2.imag;
	complejo respuesta(nuevo, nuevo1);
	return respuesta;
}*/
void complejo::muestra()
{
	cout << normal << "+" << imag << 'i' << endl;
}