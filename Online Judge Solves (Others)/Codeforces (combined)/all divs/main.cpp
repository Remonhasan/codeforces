/* Remon Hasan
University of Asia Pacific */

#include <iostream>
using namespace std;
int main()
{
    int n;
    string uap;
    cin >> n;
    while (n--)
    {
        cin >> uap;
        if (uap.length() > 10)
        {
            cout << uap[0] << uap.length() - 2 << uap[uap.length() - 1] << endl;
        }
        else
        {
            cout << uap << endl;
        }
    }
    return 0;
}