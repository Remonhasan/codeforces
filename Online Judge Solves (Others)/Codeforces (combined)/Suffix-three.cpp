/* Author : Remon Hasan
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

# define ll long long

int main ()
{
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       ll len = s.length()-1;
       if(s[len-1]=='p' && s[len]=='o'){
        cout << "FILIPINO" << endl;
            continue;
       }
        if(s[len - 3] =='d' && s[len - 2] =='e' && s[len - 1] =='s' && s[len] == 'u'){
            cout << "JAPANESE" << endl;
            continue;
        }
         if(s[len - 3] =='m' && s[len - 2] =='a' && s[len - 1] =='s' && s[len] == 'u'){
            cout << "JAPANESE" << endl;
            continue;
        }
        if(s[len - 4] =='m' && s[len - 3] =='n' && s[len - 2] =='i' && s[len - 1] =='d' && s[len] == 'a'){
            cout << "KOREAN" << endl;
            continue;
        }
    }
}
