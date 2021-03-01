/* Author: Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
#include<string.h>
#include <vector>
#include <queue>

using namespace std;

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define PI              acos(-1.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>


#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define all(v) v.begin(),v.end()
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);

void solve()
{
    int n, k;
	cin >> n >> k;
	set<int> el;
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (!el.count(x)) {
			ans.push_back(i);
			el.insert(x);
		}
	}
	
	if (int(ans.size()) < k) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		for (int i = 0; i < k; ++i)
			cout << ans[i] + 1 << " ";
		cout << endl;
	}
	
}

int main ()
{
    FastRead;
    solve();
}