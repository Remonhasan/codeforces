#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,c=0;
    cin>>N;
    vector<int>a(N);
    for(int i=0; i<N; ++i)
    {
        cin>>a[i];
    }
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(a[i]==a[j])
            {
                a[i]=0;
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        if(a[i]>0)
            c++;
    }
    cout<<c<<endl;
    for(int i=0; i<N; i++)
    {
        if(a[i]>0)
            cout<<a[i]<<endl;
    }
}


