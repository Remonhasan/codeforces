// Remon Hasan
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int p[4], a, b;
    cin >> p[0] >> p[1] >> p[2] >> p[3] >> a >> b;

    int m = *min_element(p, p + 4);
    if (a < m)
    {
        cout << min(b, m - 1) - a + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
