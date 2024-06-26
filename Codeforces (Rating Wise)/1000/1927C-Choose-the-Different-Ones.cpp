// author: remonHasan
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define VI vector < int > v;
#define PR pair < int, int >
#define RAB(i, a, b) for (int i = a; i < b; i++)
#define Brain for(auto &it:v)
#define PB push_back
#define IS getline(cin, s);
#define nl cout << "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int MAXN=4e5+5;
int cnt[MAXN];


void solve()
{
  int n,m,k; cin>>n>>m>>k;
  vector<int> a(n), b(m);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];

  
  vector<int> cnt(k + 1, 0);
  for (int e : a) {
      if (e <= k) {
          cnt[e] |= 1;
      }
  }

  for (int e : b) {
      if (e <= k) {
          cnt[e] |= 2;
      }
  }

  vector<int> c(4, 0);
  for (int e : cnt) {
      c[e]++;
  }

  cout << ((c[1] > k / 2) || (c[2] > k / 2) || (c[1] + c[2] + c[3] != k) ? "NO" : "YES") << endl;
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