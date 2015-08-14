#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string sFrase, sEnd="END", sNuevo;

    do {
        cout << "Teclea tu frase: ";

        getline(cin, sFrase);

        //Upper case
        for(int i = 0; i < sFrase.length(); i++)
        {
          sFrase[i] = toupper(sFrase[i]);
        }
        cout << sFrase << endl;
        //Borrar espacios
        for(int i = 0; i < sFrase.length(); i++)
        {
            if (sFrase[i] == ' ')
                sFrase.erase(i,1);
        }
        cout << sFrase << endl;
        //Invert string

        if(sFrase == sNuevo)
            cout << "YES" << endl;

        }while(sFrase != sEnd);

    return 0;
}
