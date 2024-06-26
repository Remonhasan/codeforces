#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int count=0;
    string a,b;
    cin>>a;
    for(int i=0;i<5;i++){
        cin>>b;
         if(a[0]==b[0]||a[1]==b[1]){
            count++;
         }
    }
    if(count>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}

