//Oscar Elizondo A01192543
//Grupo Ma/Vie : 10:30 am
//Tarea: Archivos de texto.




#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string sPrimero, sSegundo, sNuevo, sFrase, sFrase2, sLinea;
    int iNum, iNum2;

    cout << "Teclee el nombre del primer archivo: " << endl;
    getline(cin,sPrimero);
    cout << "Teclee el nombre del segundo archivo: " << endl;
    getline(cin,sSegundo);
    cout << "Teclee el nombre del archivo nuevo: " << endl;
    getline(cin,sNuevo);
    ifstream ArchivoUno, ArchivoDos;
    ofstream ArchivoNuevo;
    ArchivoUno.open(sPrimero.c_str());
    ArchivoDos.open(sSegundo.c_str());
    ArchivoNuevo.open(sNuevo.c_str());

  /*  while(getline(ArchivoUno, sLinea))
    {
        iTotal++;
    }
    cout << "Total es:" << iTotal;*/
    while(!ArchivoDos.eof() || !ArchivoUno.eof())
    {

            if(!ArchivoUno.eof() && !ArchivoDos.eof() )
            {
                ArchivoUno >> iNum;
                ArchivoDos >> iNum2;
                getline(ArchivoUno, sFrase);
                getline(ArchivoDos, sFrase2);
                ArchivoNuevo << sFrase << endl;
                ArchivoNuevo << sFrase2 << endl;
            }
            else
            {
                if(ArchivoUno.eof())
                {
                    getline(ArchivoDos, sFrase2);
                    ArchivoNuevo << sFrase2 << endl;
                }
                else
                {
                    getline(ArchivoUno, sFrase);
                    ArchivoNuevo << sFrase << endl;
                }
            }

    }

    ArchivoNuevo.close();
    ArchivoUno.close();
    ArchivoDos.close();

    return 0;
}
