/* Author: Remon Hasan
   Problem: 703A
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
*/
	int t,m,c,count(0),count1(0);
	cin>>t;
	for(int i=0;i<t;i++){
        cin>>m>>c;
		if(m>c){
			count++;
		} 
		else if(m<c) 
			{
				count1++;
			}
		}
       if(count>count1)
			cout<<"Mishka"<<endl;
		else if(count1>count)
			cout<<"Chris"<<endl;
		else
			cout<<"Friendship is magic!^^"<<endl;
    
	
}