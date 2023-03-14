/*
	author: remonhasan
	round: 143 / Div 2A
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int N, ans = 0;
	cin>>N;
	for(int i=0;i<N;i++){
		int a,b,c;
		cin>>a>>b>>c;
		ans = ans + (a+b+c>=2);
	}
	cout<<ans<<"\n";
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}