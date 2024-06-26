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
	int n; cin >> n;
    int max_sum = 0;
    int optimal_x = 2;
	for (int x = 2; x <= n; ++x) {
	    int k = n / x;
	    int sum = k * (k + 1) / 2 * x;
	    if (sum > max_sum) {
	        max_sum = sum;
	        optimal_x = x;
	    }
	}

	cout << optimal_x << nl;
}

int main() {
  ios;
  int t; cin >> t;
  while(t--){
    solve();
  }
  
  return 0;
}
