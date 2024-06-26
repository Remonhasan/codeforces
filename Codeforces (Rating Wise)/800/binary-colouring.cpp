#include <iostream>
#include <vector>
using namespace std;
 
void solve(int x) {
    vector<int> a;
    while (x != 0) {
        if (x % 2 == 0) {
            a.push_back(0);
        } else if (x % 4 == 1) {
            a.push_back(1);
            x -= 1;
        } else {
            a.push_back(-1);
            x += 1;
        }
        x /= 2;
    }
    cout << a.size() << endl;
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
}
 
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        solve(x);
    }
    return 0;
}