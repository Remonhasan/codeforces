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

ll findGCD(ll a, ll b){
	while(b != 0){
		ll tmp = a % b;
        a = b;
        b = tmp;
	}

	return a;
}

ll findLCM (ll a, ll b){
	return (a * b)/findGCD(a,b);
}

void solve()
{
  int n; cin >> n;
  vector<ll> k(n);
  for(ll i=0;i<n;i++) cin >> k[i];

  ll lcm_result = 1;
  for(ll i=0;i<n;i++) lcm_result = findLCM(lcm_result,k[i]);

  ll sum = 0;
  for(ll i=0;i<n;i++) sum += lcm_result / k[i];

  if( sum < lcm_result){
  	for(ll i=0;i<n;i++) cout << lcm_result / k[i] << " ";
  	cout << endl;
  }else{
  	cout << -1 << endl;
  }
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
