#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long long>;
#define pb push_back
#define nl '\n'
#define brain for(int i=0; i<n; i++)
#define IS getline(cin, s);
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


void solve()
{
  string a, b;
  cin >> a >> b;
  swap(a[0], b[0]);
  cout << a << " " << b << endl;
}

int main() {
  ios;
  int t; cin >> t;
  while(t--){
    solve();
  }
  
  return 0;
}
