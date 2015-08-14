//Oscar Marcelo Elizondo A01192543
// Clase Ma/Vie - 10:30
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string sFrase, sEnd="END", sNuevo;
    string sArr[100];
    int iCont=0;
    for(int i = 0; i < 100; i++)
    {
        getline(cin, sFrase);
        for(int i = 0; i < sFrase.length(); i++)
        {
          sFrase[i] = toupper(sFrase[i]);
        }
        sArr[i] = sFrase;
        iCont++;
        if(sFrase == sEnd)
            break;
    }
    cout << endl;
    for(int i = 0; i < iCont; i++)
        {
        sFrase = sArr[i];
        for(int i = 0; i < sFrase.length(); i++)
        {
            if (sFrase[i] == ' ')
                sFrase.erase(i,1);
        }
        sNuevo = string(sFrase.rbegin(),sFrase.rend());
        if(sFrase == sNuevo)
            cout << "YES" << endl;
        else if (sFrase != sNuevo && sFrase != sEnd)
            cout << "NO" <<endl;
        else
            break;
        }
    return 0;
}
