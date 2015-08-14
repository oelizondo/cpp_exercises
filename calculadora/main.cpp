#include <iostream>

using namespace std;

int suma(int a, int b){
    return a + b;
}
int resta (int a, int b){
    return a - b;
}


int main()
{
    int a,b;
    char signo, res;
    bool flag = false;

    do{
        cout << "Operacion" << endl;
        cin >> a >> signo >> b;

        if(signo == '+')
            cout << suma(a,b) << endl;
        else
            cout << resta(a,b) << endl;

        cout << "desea hacer otra operacion?" << endl;
        cin >> res;
        if (res == 'c')
            flag = true;

    }while(!flag);
    return 0;
}
