/* 
In the name of ALLAH
Author: Remon Hasan
University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,m;
    int sum =0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
       sum = sum + a[i];
    }
    if(sum==m){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}