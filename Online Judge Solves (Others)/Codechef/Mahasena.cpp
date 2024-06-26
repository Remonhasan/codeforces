#include<iostream>
using namespace std;

int main ()
{
    int t, c =0,c1 = 0;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            c++;
        }
        else
            c1++;
    }
    if(c>c1)
        cout<<"READY FOR BATTLE"<<endl;
    else if(c==c1)
        cout<<"NOT READY"<<endl;
    else
        cout<<"NOT READY"<<endl;
}
