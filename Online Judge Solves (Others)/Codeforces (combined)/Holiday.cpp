// Remon Hasan
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,A=0,B=0,sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A;
        B=max(A,B);
        sum=sum+A;
    }
    cout<<(N*B)-sum<<endl;

}

