#include<bits/stdc++.h>
using namespace std;

int main ()
{
   vector<int>a(4);
   for(int i=0;i<4;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
  if(a[3]==(a[0]+a[1]+a[2]))
    cout<<"YES"<<endl;
  else if(a[0]+a[3]==a[1]+a[2])
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

}
