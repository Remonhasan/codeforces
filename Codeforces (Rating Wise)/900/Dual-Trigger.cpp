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
  int n; cin >> n;
  string s; cin >> s;
  int count = 0, mi = n, mx = -1;
  for(int i=0;i<n;i++){
    if(s[i] == '1'){
      count++;
      mi = min(mi, i); mx = max(mx, i);
    }
  }

  cout << (count % 2 == 1 || (count == 2 && mx - mi == 1) ? "NO\n" : "YES\n");
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