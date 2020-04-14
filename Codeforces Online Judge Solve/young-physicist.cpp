// Author: Remon Hasan
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,x_sum(0),y_sum(0),z_sum(0);
     cin>>t;
     while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        x_sum+=x;
        y_sum+=y;
        z_sum+=z;
     }
     if(x_sum==0 && y_sum==0 && z_sum==0)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
}
