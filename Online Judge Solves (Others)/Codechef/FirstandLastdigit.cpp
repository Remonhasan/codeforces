#include<iostream>
using namespace std;
int main()
{
    int p,s=0,t;
    long long a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        p=a%10;
        while(a>=10)
        {
            a=a/10;
        }
        s=p+a;
        cout<<s<<endl;

    }


}
