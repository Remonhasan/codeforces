/*
	author: remonhasan
	Div 02 / A / 800 / greedy / 1879A 
*/

#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll long long
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void solve(){
	ll t;
	cin >> t;
	while(t--){
	
		ll n,polycarp_strength,polycarp_endurance,weight,strength,endurance;
        cin>>n;

		 for(ll i = 0; i < n ; i++) {
            cin>>strength>>endurance;
            if(i == 0) {
                polycarp_strength = strength;
                polycarp_endurance = endurance;
                weight = strength;
            }
            else {
                if(strength >= polycarp_strength and endurance >= polycarp_endurance) {
                    weight = -1;
                }
            }
        }
        cout<<weight<<endl;
		
	}
}

int main()
{
	ios;
    solve();
}