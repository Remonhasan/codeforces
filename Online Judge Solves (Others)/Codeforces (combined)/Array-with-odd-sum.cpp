#include<bits/stdc++.h>
using namespace std;

int main ()
{
    cin.tie(0);
    cout.tie(0);
    int t,even,odd,sum;
    cin>>t;
    int N;
    for(int i=0; i<t; i++)
    {
        cin>>N;
        even=0;
        odd=0;
        sum=0;
        int a[N];
        for(int j=0; j<N; j++)
        {
            cin>>a[j];

            if(a[j]%2!=0 || a[j]==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum=sum+a[j];
        }
        if(sum%2!=0 || sum==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if(odd!=0 && even!=0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
