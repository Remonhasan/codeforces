/**
 *    author:  remonhasan
 *    created: 20-08-2024
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl '\n'
 
void solve()
{
	int n; 
	scanf("%d",&n);
 
	vector<int> a(n);
	map<int, int> freq;
 
	for (int i = 0; i < n; ++i) {
	    scanf("%d",&a[i]);
	    freq[a[i]]++;
	}
 
	int max_freq = 0;
	for (const auto& p : freq) {
	    max_freq = max(max_freq, p.second);
	}
 
	int operations = n - max_freq;
	cout << operations << nl;
	fflush(stdout);
    
}
 
int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0);
 
	int t; 
	scanf("%d",&t);
 
	for(int cs=1; cs<=t; cs++){
		solve();
	}
  
  return 0;
}