#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int>a(N);
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        bool b = true;
        for(int i=0;i<N;i++){
            for(int j=0;j<i;j++){
                b &= abs(a[i]-a[j])!=1;
            }
        }
      cout<<2-b<<endl;
    }
}
