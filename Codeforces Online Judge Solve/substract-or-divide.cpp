/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: CF-Round 685-Div2-A
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long
#define lll unsigned long long int
#define E "\n"
#define pb push_back
typedef vector<int> v;
typedef vector<bool>B;

void brain()
{
	ll n;
	cin>>n;
	if(n==1) cout<<0<<endl;
	else if(n==2) cout<<1<<endl;
	else if(n==3) cout<<2<<endl;
	else if(n%2==0) cout<<2<<endl;
	else{
		cout<<3<<endl;
	}
	
} 

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
/*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/
	int t;
	cin>>t;
	while(t--)
	{
		brain();

	}
	return 0;
}