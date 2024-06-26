#include <iostream>
using namespace std;
 
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n >= m && (n % 2 == m % 2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}