/*
	author: remonhasan
	round: 238 / Div 2A
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++) cin>>arr[i];
	sort(arr, arr + N);
    for(int i=0;i<N;i++) cout<<arr[i]<<" ";	
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}