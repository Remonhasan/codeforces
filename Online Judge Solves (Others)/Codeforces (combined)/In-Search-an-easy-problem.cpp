#include<bits/stdc++.h>
using namespace std;

int main ()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int MAX;
    cin>>MAX;
    int a[MAX];
    int count=0;
    for(int i=0;i<MAX;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<MAX;j++)
    {
        if(a[j]==1){
            count++;
        }
    }
    if(count>=1)
            cout<<"HARD"<<endl;
    else
            cout<<"EASY"<<endl;
}
