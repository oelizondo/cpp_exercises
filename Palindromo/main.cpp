#include <iostream>
#include <string>
using namespace std;

bool palindromo(string str)
{
    string temp;

    //estandariza el string, es decir, quita espacios, mayusculas, comas y puntos.

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ' || str[i] == ',' || str[i] == '.'){
            str.erase(i, 1);
            if(str[i] == ' ')
                str.erase(i, 1);
        }
        str[i] = tolower(str[i]);
    }

    //invierte el string

    for(int i = str.length()-1; i >=  0; i--){
        temp+=str[i];
    }
    return(temp == str)?true:false;
}

int main()
{
    string str;
    getline(cin, str);

    //1 = true. 0 = false.
    cout << palindromo(str) << endl;
    return 0;
}
