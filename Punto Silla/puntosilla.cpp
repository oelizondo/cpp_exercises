#include <iostream>

using namespace std;

void puntosilla(int iMat[][10], int iA)
{
    int iMayor[10]={-999, -999, -999, -999, -999, -999, -999, -999, -999, -999};
    int iMenor[10]={999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    int iCont=0;
    for (int r = 0; r < iA; r++)
    {
        for(int c = 0; c < iA; c++)
        {
            if(iMat[r][c] > iMayor[r])
                iMayor[r] = iMat[r][c];

            if (iMat[r][c] < iMenor[c])
                iMenor[c]= iMat[r][c];
        }
    }
    for(int r = 0; r < iA; r++)
    {
        for(int c = 0; c < iA; c++)
        {
            if (iMayor[r] == iMenor[c])
            {
                iCont++;
                cout << r << " " << c << endl;
                if(iCont > 1)
                    break;
            }
        }
    }
    if (iCont == 0)
        cout << -1 << -1 << endl;

}

int main()
{
    int iA, iMat[10][10];
    cin >> iA;
    cout << endl;

      for(int r = 0; r < iA; r++)
    {
        for(int c = 0; c < iA ; c++)
        {
            cin >> iMat[r][c];
        }
        cout << endl;
    }

    puntosilla(iMat, iA);

    return 0;
}
