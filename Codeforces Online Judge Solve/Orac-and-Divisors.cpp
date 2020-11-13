
/* Author: Remon Hasan
   University of Asia Pacific
*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long
#define ull unsigned int
#define pb push_back
//vector<int>brain;


int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
/*	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
*/
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin >> n >> k;
    if(n%2==0)
    {
        cout << n+2*k << endl;
        continue;
    }
    int p = 0;
    for(int i = n; i>=2; i--)
        if(n%i==0)
            p = i;
    cout << n+p+2*(k-1) << endl;
        
  }
  return 0;
}  
    	
