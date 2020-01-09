#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d;
    cin>>a>>b;
    c=a*b;
    d=(a+b)*2;
    if(c>d)
    {

        cout<<"Area"<<endl;
        cout<<c<<endl;

    }
    else if(c < d)
    {
        cout<<"Peri"<<endl;
        cout<<d<<endl;
    }

    else
    {
        cout<<"Eq"<<endl;
    }

}
