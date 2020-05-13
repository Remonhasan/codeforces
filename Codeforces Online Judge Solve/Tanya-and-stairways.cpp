#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main ()
{
    int n;
    cin>>n;
    vector<int>a;
    int p=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1 && p!= -1)
            a.pb(p);
        p=x;
    }
    a.pb(p);
    cout << a.size()<< endl;
    for (int i: a)
    cout << i << " ";
}
