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
#define nl "\n";
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
  int n,m; cin >> n >> m;
  if(m % 2 == 0 && n%2 == 0  && n >= m){
    cout << "Yes" << nl;
  }else if(m % 2 != 0 && n%2 != 0  && n >= m){
    cout << "Yes" << nl;
  }else{
    cout << "No" << nl;
  }
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