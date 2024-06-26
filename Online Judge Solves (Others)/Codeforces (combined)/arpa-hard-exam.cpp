
/* Author: Remon Hasan
   University of Asia Pacific
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned int


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
    int n;
    cin>>n;
    if(n==0)
        {
            cout<<"1";
            return 0;
        }

    if(n%4==0)
        cout<<"6"<<endl;
    else if(n%4==1)
        cout<<"8"<<endl;
    else if(n%4==2)
        cout<<"4"<<endl;
    else if(n%4==3)
        cout<<"2"<<endl;
	
}