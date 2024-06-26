// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i <= b; i++)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int lcs_length = 1;
        while ((x & lcs_length) == (y & lcs_length)) {
            lcs_length <<= 1;
        }
        cout << lcs_length << endl;
    }
    return 0;
}

