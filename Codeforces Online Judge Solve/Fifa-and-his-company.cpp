// Remon Hasan
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,count=0;
    cin>>N;
    for(int i=1;i<=N/2;i++){
        if(N%i==0){
            count++;
        }
    }
    cout<<count<<endl;
}
