#include<iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    if(t%4==0)
    {
        t +=1;
        cout<<t<<endl;
    }
    else
    {
        t-=1;
        cout<<t<<endl;
    }

}
