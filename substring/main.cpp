#include <iostream>
#include <string>
using namespace std;

bool GetString (string Str1, string Str2)
{
    string sTemp;
    for(int i = 0; i < Str2.length(); i++){
        for(int m = 0; m < Str1.length(); m++){
            if(Str1[i] == Str2[m]){
                sTemp = Str2.substr(i, Str1.length());
                if(sTemp == Str1)
                    return true;
            }
        }
    }
    return false;
}




int main()
{
    int iNum;
    double dNum;
    char chSigla;
    bool bTrue;
    cout << mayor(a,b) << endl;
    return 0;
}
