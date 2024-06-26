/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: atcoder round 185
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
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[0]<<E;
    
}