/* Remon Hasan
University of Asia Pacific */

#include <iostream>
using namespace std;
int main()
{
    int uap;
    cin >> uap;
    if (uap <= 10 || uap > 21)
    {
        cout << 0 << endl;
    }
    else if (uap == 20)
    {
        cout << 15 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    return 0;
}