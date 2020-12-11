/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: CF-round 688- Div 2
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define ll long long
#define lli long long int
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define MEM(a,x)        memset(a,x,sizeof(a))
#define E "\n"
#define pb              push_back
typedef vector<int> v;
typedef vector<bool>B;


void brain()
{
	ll n,m,r,c,maxtoR=0,maxtoC=0;
	cin>>n>>m>>r>>c;
	maxtoR = max(r-1,n-r);
	maxtoC = max(c-1,m-c);
	cout<<maxtoR+maxtoC<<E;
	
}

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
      
      brain();

	}	
}