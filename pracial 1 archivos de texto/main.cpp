#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string sNombre, sNuevo;
    int iNum;
    cout << "Nombre del archivo: ";
    cin >> sNombre;
    sNombre+=".txt";
    ifstream ArchivoUno, ArchivoDos;
    ofstream ArchivoSalida;
    ArchivoUno.open(sNombre.c_str());
    {
        string sX;
        while(!ArchivoUno.eof())
        {
            getline(ArchivoUno,sX);
            cout << sX << endl;
        }
    }
    ArchivoUno.close();

    cout << "Nombre del archivo nuevo: ";
    cin >> sNuevo;
    sNuevo+=".txt";
    ArchivoSalida.open(sNuevo.c_str());
    {
        ArchivoSalida << "Hola!" << endl;
    }
    ArchivoSalida.close();

    cout << "Nombre del archivo a leer: ";
    cin >> sNombre;
    sNombre += ".txt";
    ArchivoDos.open(sNombre.c_str());
    {
        while(!ArchivoDos.eof())
        {
            ArchivoDos >> iNum;
            cout << iNum << endl;
        }
    }
    ArchivoDos.close();
    return 0;
}
