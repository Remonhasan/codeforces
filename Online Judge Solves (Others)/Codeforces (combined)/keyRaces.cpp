// Remon Hasan
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int r1= ((2*t1)+(v1*s));
    int r2= ((2*t2)+(v2*s));
    if(r1<r2)
        cout<<"First"<<endl;
    else if(r1>r2)
        cout<<"Second"<<endl;
    else
        cout<<"Friendship"<<endl;
}
