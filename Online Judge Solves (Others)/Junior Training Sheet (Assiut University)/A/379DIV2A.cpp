/*
 	@author : remonhasan
*/
#include <bits/stdc++.h>
using namespace std;

void solve ()
{
	int N, totalAnton = 0, totalDanik = 0;
	cin>>N;
	char s[N];
	cin>>s;

	for(int i= 0 ; i<N;i++){
		s[i]== 'A' ?  totalAnton ++ : totalDanik++;
	}

	if(totalAnton > totalDanik){
		cout<<"Anton"<<"\n";
	}else if(totalAnton == totalDanik){
		cout<<"Friendship"<<"\n";
	}else{
		cout<<"Danik"<<"\n";
	} 
    
}

int main ()
{
	solve();
}