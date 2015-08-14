#include <iostream>

using namespace std;

int main()
{
    int arr[5], num;
    for(int i = 0 ; i < 5; i++)
    {
        cin >> num;
        arr[i] = num;
        cout << arr[i];
    }

    return 0;
}
