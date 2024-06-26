/*
    In the Name of Allah
    Author: Remon Hasan
    University of Asia Pacific
    Problem: CF-Round 684-Div1&2-A
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define ll long long

void brain()
{
	int n;
	cin>>n;
	if(n%4!=0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	
} 

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
  
	int t;
	cin>>t;
	while(t--)
	{
		brain();

	}
	return 0;
}