/* Author: Remon Hasan
   solving concept: count the S and F. if S>F -> Yes else -> NO.
*/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,S=0,F=0;
    cin>>N;
    string a;
    cin>>a;
   for (int i = 1; i < a.size(); i++) {
    if (a[i - 1] != a[i]) {
      if (a[i - 1] == 'S') {
        S++;
      } else {
        F++;
      }
    }
  }
  if(S>F)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;


}
