#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long p;
        cin>>p;
        int item=0;
        if(p>2048)
        {
            item+=p/2048;
            p=p%2048;
        }
        while(p)
        {
            if(p%2)
                item++;
            p=p/2;
        }
        cout<<item<<endl;
    }
}
