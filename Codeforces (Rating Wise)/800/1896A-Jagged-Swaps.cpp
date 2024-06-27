#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using lli = long long int;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
  int n; cin >> n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  
  for (int i = 1; i < n - 1; ++i) {
    int min_index = i;
    for (int j = i + 1; j < n; ++j) {
        if (a[j] < a[min_index]) {
            min_index = j;
        }
    }
    int temp = a[i];
    a[i] = a[min_index];
    a[min_index] = temp;
  }

  cout << ((is_sorted(a.begin(),a.end())) ? "YES" : "NO") << nl;
}

signed main() {
  ios;
  int t;
  cin >> t;
  
  while (t--) {
    solve();
  }

  return 0;
}