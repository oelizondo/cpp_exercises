/*
OSCAR ELIZONDO A01192543
GRUPO: MA/VIE - 10:30 AM

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int iMayor=0;
    string sFrase, sEnd="END", sNuevo, sMayor="";
    string sArr[100];
    int iCont=0, iCont2=0, iWordcount=0;
    for(int i = 0; i < 100; i++)
    {
        getline(cin, sFrase);
        if(sFrase == "end" || sFrase == "End")
        {
            for(int i = 0; i < sFrase.length(); i++)
            {
              sFrase[i] = toupper(sFrase[i]);
            }
        }
        sArr[i] = sFrase;
        iCont++;
        if(sFrase == sEnd)
            break;
    }
    for(int i= 0; i < iCont; i++)
    {
        sFrase = sArr[i];
        //sFrase.end()+=' ';
        if(sFrase=="END")
            break;
        for(int i = 0; i< sFrase.length();i++)
        {
            if(sFrase[i]==' ')
                iWordcount++;
        }

        for(int i = 0; i <= iWordcount ; i++ )
        {
            sNuevo = sFrase.substr(0,sFrase.find(' '));
            if(sNuevo.length() > iMayor)
            {
                iMayor = sNuevo.length();
                sMayor = sNuevo;
            }
            sFrase = sFrase.erase(0,sFrase.find(' '));
            iCont2++;
        }
        cout << iCont2 << " " << sMayor << endl;
        iWordcount=0;
        iCont2=0;
        iMayor=0;
    }
    cout << endl;
    return 0;
}
