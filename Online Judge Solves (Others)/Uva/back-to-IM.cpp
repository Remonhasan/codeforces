/* Author: Remon Hasan
   Problem: 10773
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pb push_back
#define ll long long
int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 */
   double d,v,u,t1,t2,ans;
    int t;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d>>v>>u;
        
        if(v>=u || u==0 || v==0){
            printf("Case %d: can't determine\n",i+1);
            continue;
        }
        t1=d/u;
        t2=d/sqrt(u*u-v*v);
        ans = t2-t1;
        
        printf("Case %d: %.3lf\n",i+1,fabs(ans));
    }

}
