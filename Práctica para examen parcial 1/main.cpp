#include <iostream>
#include <string>
using namespace std;

string verificar(string sNombre)
{
    int iCont = 0, inuevo, cont;

    for(int i = 0; i < sNombre.length(); i++)
    {
        if(sNombre[i] == ' ')
        {
            iCont++;
        }
    }
    if (iCont == 1)
    {
        return sNombre;
    }
    else if (iCont > 1)
    {

        inuevo = sNombre.find(' ');
        cont = sNombre.rfind(' ');
        inuevo = cont - inuevo;
        sNombre.erase(sNombre.find(' '), inuevo);
        return sNombre;
    }
    else
    {
        return sNombre;
    }
}
int main()
{
    string sNombre;
    cout << "Introduce nombre: " << endl;
    getline(cin, sNombre);
    verificar(sNombre);

    return 0;
}
