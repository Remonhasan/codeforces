#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector<int>N(4);
    for(int i=0;i<4;i++){
        cin>>N[i];
    }
    sort(N.begin(),N.end());
    cout<<N[3]-N[0]<<" "<<N[3]-N[1]<<" "<<N[3]-N[2]<<endl;
}
