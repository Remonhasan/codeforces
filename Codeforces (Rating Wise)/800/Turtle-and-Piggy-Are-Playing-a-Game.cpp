#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long l, r, count = 0;
        cin >> l >> r;
        while (r > 1) {
            r /= 2;
            count++;
        }
 
        cout << count << endl;
    }
 
    return 0;
}