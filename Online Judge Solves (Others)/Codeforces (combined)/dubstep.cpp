/* Author: Remon Hasan
   Problem: 208A
*/
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main ()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
*/	string s;
	int flag=1;
	cin>>s;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!flag){
	            cout<<" ";
	        }
	        continue;
	    }else {
	        flag=0;
	        cout<<s[i];
	    }
	}
}