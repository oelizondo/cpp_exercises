//Oscar Elizondo A01192543
//
//
#include <iostream>
#include <string>
using namespace std;
#include "CtaBan.h"
#include "CtaAhorro.h"
#include "CtaInv.h"

int main()
{
    CuentaBancaria *ArrCuentas[5];

    ArrCuentas[0] = new CuentadeAhorros("Oscar", 123, 1000);
    ArrCuentas[1] = new CuentadeAhorros("Luis", 124, 2000);
    ArrCuentas[2] = new CuentadeInversion("Petrocchi", 125, 1200, 10);
    ArrCuentas[3] = new CuentadeInversion ("Pena", 126, 1500, 15);
    ArrCuentas[4] = new CuentadeInversion ("Brina", 127, 2500, 12);

    cout << "Consultar cantidades" << endl;
    for(int i = 0; i < 5; i++){
        ArrCuentas[i]->consultaSaldo();
        ArrCuentas[i]-> retira(1000);
    }
    cout << endl;
    cout << "Retirar cantidades" << endl;
    for(int i = 0; i < 5; i++){
        ArrCuentas[i] -> consultaSaldo();
        ArrCuentas[i] -> deposita(1000);
    }
    cout << endl;
    cout << "Consultar cantidades con deposito" << endl;
    for(int i = 0 ; i < 5 ; i++){
        ArrCuentas[i] -> consultaSaldo();
    }
    return 0;
}
