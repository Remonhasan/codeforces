#include<iostream>
using namespace std;
int main ()
{
    int t,count=0;
    long long b;
    cin>>t>>b;
    while(t--)
    {
        long long a;
        cin>>a;
        if(a%b==0)
            count++;
    }
    cout<<count<<endl;
}

