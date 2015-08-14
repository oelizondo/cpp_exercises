#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sNombre;
    string sArr[50] = {"Oscar", "Andres", "Chuy", "Luis"};
    cout << "Escribe el nombre de tu amigo: " << endl;
    getline(cin, sNombre);
    for (int i = 0; i < 50; i++)
    {
        if (sNombre == sArr[i])
        {
            cout << "Amigo encontrado!" << endl;
            break;
        }
    }

    return 0;
}
