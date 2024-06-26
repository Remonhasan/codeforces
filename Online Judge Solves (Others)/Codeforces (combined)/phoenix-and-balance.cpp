/* Author: Remon Hasan
   Problem: 1348A
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int sum1 = pow(2,N);
		int sum2=0;
		for(int i=1;i<N/2;i++){
			sum1+=pow(2,i);
        }
		for(int i=N/2;i<N;i++){
			sum2+=pow(2,i);
        }
       cout<<sum1-sum2<<endl;
	}
}