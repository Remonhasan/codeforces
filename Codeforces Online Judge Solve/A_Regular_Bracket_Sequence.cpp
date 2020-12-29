/* Name of Allah
Author: Remon Hasan
Problem: Educational Round 01 - Div 02 [A]
*/
#include<bits/stdc++.h>
#include <iostream> 
#include <stack>
#include<string.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    if(s.length() % 2){
        cout<<"NO"<<endl;
        return;
    }
    if(s[0]==')' || s[s.length()-1]=='('){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
   
}

int main()
{
   int t;
   cin>>t;
    while(t--){
        solve();
    }

    return 0;
}


