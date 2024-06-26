// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector<int>
#define PR pair<int, int>
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];

void solve() {
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    
    int diff = 1e9;
    bool sorted = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            diff = min(a[i] - a[i - 1], diff);
            sorted &= a[i] >= a[i - 1];
        }
    }
    
    if (!sorted) {
        cout << 0 << endl;
        return;
    }

    cout << diff/2 + 1 << endl;
    
}

int main() {
    ios;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
