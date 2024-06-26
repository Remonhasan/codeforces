// author: remonhasan
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        if (a == sorted_a) {
            cout << "Yes" << endl;
        } else {
            bool possible = false;
            for (int i = 1; i < n; i++) {
                vector<int> x(a.begin(), a.begin() + i);
                vector<int> y(a.begin() + i, a.end());
                vector<int> combined = y;
                combined.insert(combined.end(), x.begin(), x.end());
                if (combined == sorted_a) {
                    possible = true;
                    break;
                }
            }
            if (possible) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}