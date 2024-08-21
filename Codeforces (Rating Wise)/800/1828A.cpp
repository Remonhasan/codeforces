#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n; 
  scanf("%d",&n);

  for(int i=1; i<=n; i++) cout << i * 2 << " ";
  cout << '\n';

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