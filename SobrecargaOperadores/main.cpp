#include <iostream>
#include <string>
using namespace std;
#include "persona.h"
#include "estudiante.h"
#include "complejo.h"
/*int mayor(int a,int b)
{
    return (a>b)?a:b;
}*/
template<class x>
x suma (x num1, x num2)
{
    return num1+num2;
}
int main()
{

    double num1 = 5.4, num2 = 6.5;
    int num3 = 50, num4 = 54;
    string str1 = "hola", str2 = " amigo";
    cout << suma(num1, num2) << endl;
    cout << suma(num3, num4) << endl;
    cout << suma(str1, str2) << endl;

    Persona p("juan", 19);
    Estudiante es("oscar", 19, "itc");

    complejo numero(2,7), numero2(6,9), numero3;
    numero3 = numero + numero2;
    numero3.muestra();
    ++numero3;
    numero3.muestra();

//    numero3 = numero2 - numero;

    numero3.muestra();




    return 0;
}
