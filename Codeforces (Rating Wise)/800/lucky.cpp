/*
 author: remonhasan
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve (){

  string ticket;
  cin >> ticket;

  int sumFirstThreeDigits = 0;
  int sumLastThreeDigits = 0;

 for(int i=0;i<6;i++){
  if(isdigit(ticket[i])){
    int digit = ticket[i] - '0';
    if (i < 3) {
      sumFirstThreeDigits += digit; 
    } else {
      sumLastThreeDigits += digit; 
    }
  }
 }

 sumFirstThreeDigits == sumLastThreeDigits ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}



int main ()
{
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}