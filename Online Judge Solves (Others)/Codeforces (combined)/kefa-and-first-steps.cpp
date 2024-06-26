#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,c=0,m=1;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>=a[i-1]){
            c++;
            m = max(m,c);
        }
        else{
            c=1;
        }
    }
    cout<<m;
}
