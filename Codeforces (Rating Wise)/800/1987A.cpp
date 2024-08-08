#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
  int n,k; 
  scanf("%d%d",&n,&k);

  cout << k * (n-1) + 1 << nl;

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