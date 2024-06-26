#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define nIn int n; cin >> n;
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int MAX = 999999;

bool check(int x) {
    string s = to_string(x);
    int cnt = 0;
    for (char c : s) {
        if (c != '0') {
            cnt++;
        }
    }
    return cnt == 1;
}

int main() {
    ios;
    int t; cin >> t;
    vi a;
    for (int i = 1; i <= MAX; ++i) {
        if (check(i)) {
            a.push_back(i);
        }
    }

    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int x : a) {
            if (x <= n) {
                ans++;
            } else {
                break;
            }
        }
        cout << ans << nl;
    }

    return 0;
}
