#include<iostream>
using namespace std;
int main()
{
    int x,t;
    cin >>t;
    while(t--)
    {
        int s=0;
        cin>>x;
        while (x!=0)
        {
            s=s+x%10;
            x=x/10;
        }
        cout <<s<<endl;
    }
}
