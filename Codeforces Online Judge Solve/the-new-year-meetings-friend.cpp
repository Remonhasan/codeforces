#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main ()
{
    int a[3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    if(a[0]>a[2])
    {
        cout<<a[0]-a[2]<<endl;
    }
    else
    {
        cout<<a[2]-a[0]<<endl;
    }

}
