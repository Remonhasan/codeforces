#include<bits/stdc++.h>
using namespace std;
#define nl '\n'


void solve()
{
  int n; 
  scanf("%d",&n);

  vector<int> a(n);
  for(int i=0; i<n; i++) scanf("%d", &a[i]);

  sort(a.begin(),a.end());
  int medi = (n + 1) / 2 - 1;
  int result = count(a.begin() + medi, a.end(), a[medi]);

  cout << result << nl;

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