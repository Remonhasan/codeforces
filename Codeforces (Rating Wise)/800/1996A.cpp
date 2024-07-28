#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n; 
  scanf("%d",&n);

  int total_cow, total_chick, ans;
  if( n % 4 == 0){
  	total_cow = n / 4;
  	ans = total_cow;
  }else{
  	if(n % 4 != 0){
  		total_cow = n / 4;
  		int rest = n - (4*total_cow);
  		if(n % 2 == 0){
  			total_chick = rest / 2;
  		}
  	}
  	ans = total_cow + total_chick;
  }

  cout << (n == 2 ? 1 : ans) << '\n';
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