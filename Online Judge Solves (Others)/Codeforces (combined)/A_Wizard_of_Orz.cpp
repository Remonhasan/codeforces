/* Name of Allah
Author: Remon Hasan
Problem: CF - 1467A
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long

ll solve() {
    ll n;
    cin >> n;
    string s = "989";
    if (n <= 3)
        return cout << s.substr(0, n) << "\n", 0;

    cout << s;
    for (ll i = 3; i < n; i++)
        cout << (i - 3) % 10;
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

}