/* Name of Allah
Author: Remon Hasan
Problem: CF - 1472C
*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
#define ll long long

int solve() {
    int n;
   cin >> n;
   vector<int> a(n);
   for (int &x : a) {
     cin >> x;
}
 vector<int> dp(n);
  for (int i = n - 1; i >= 0; i--) {
    dp[i] = a[i];
    int j = i + a[i];
    if (j < n) {
      dp[i] += dp[j];
    }
  }
  cout << *max_element(dp.begin(), dp.end()) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

}