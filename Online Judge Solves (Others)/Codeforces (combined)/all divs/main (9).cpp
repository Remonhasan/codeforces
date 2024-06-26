/*last time Tumi ami from uap*/

#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ll a,ami;
	cin>>a>>ami;
	ll tumi=a;
	ll taka=0;
	while(tumi<ami){
	    tumi*=a;
	    taka++;
	}
	if(tumi==ami)
	cout<<"YES"<<endl<<taka;
	else
	cout<<"NO";
	return 0;
}
