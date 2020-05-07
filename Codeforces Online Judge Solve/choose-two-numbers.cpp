#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;++i){
        cin>>a[i];
    }
    int M;
    cin>>M;
    vector<int>b(M);
    for(int j=0;j<M;++j){
        cin>>b[j];
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    if(a[0]+b[0]>a[0])
        cout<<a[0]<<" "<<b[0]<<endl;
}
