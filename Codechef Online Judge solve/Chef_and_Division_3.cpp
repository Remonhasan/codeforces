/* Name of Allah
Author: Remon Hasan
Problem: Codechef-January Challenge 2021 - A
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int N;
    ll K,D;
    cin>>N>>K>>D;
    int a[N],brain;
    ll sum =0;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        sum+=a[i];
    }
    if(sum<K) cout<<0<<endl;
    if(sum==K)  cout<<1<<endl;
    else{
        if(sum>K){
           brain = sum/K;
           if(brain<D){
               cout<<brain<<endl;
           }else{
               cout<<D<<endl;
           }
    }
    }
}

int main ()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}