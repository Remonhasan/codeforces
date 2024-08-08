// author: remonhasan
#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
  int n,k; 
  scanf("%d%d",&n,&k);

  vector<int> a(n);
  for(int i=0; i<n; i++) scanf("%d", &a[i]);
  
  sort(a.begin(),a.end(),greater<int>());
  printf("%d\n", a[k-1]);

}

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0); cout.tie(0);

  solve();
  
  return 0;
}