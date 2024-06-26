/* Name of Allah
Author: Remon Hasan
Problem: CF-1472B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,init=0,end=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int res;
        cin>>res;
        if(res==1){
            init++;
        }else{
            end++;
        }
    }
    if((init+2*end)%2!=0){
        cout<<"NO"<<endl;
    }else{
        sum = (init+2*end)/2;
        if(sum%2==0 || (sum%2==1 && init!=0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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