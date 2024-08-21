#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n; 
  scanf("%d",&n);

  if( n == 1){
  	cout << 1 << '\n';
  	return;
  }
  if(n % 2 == 0){
  	cout << -1 << '\n'; 
  	return;
  }  

  int k = n/2;
  for(int i=1;i<=k;i++) cout << i <<  " ";
  for(int i=n;i>k;i--) cout << i <<  " ";
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