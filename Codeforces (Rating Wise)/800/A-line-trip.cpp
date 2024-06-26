/*
	author: remonhasan
*/

#include<bits/stdc++.h>
using namespace std;

#define fl for(int i=0;i<n;i++)

void solve(int n, int x){
	int arr[n];

    fl cin >> arr[i];
	
	int maxi = 0 , j = 0;
	
	fl {
		int A = arr[i] - j;
		maxi = max(maxi, A);
		j = arr[i];
	}

	int B = 2 * (x - arr[n-1]);
	maxi = max(B, maxi);
	cout<< maxi << endl;
 
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    	int n,x;
    	cin >> n >> x;
    	solve(n,x);
    }
}