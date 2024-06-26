/*
 	@author : remonhasan
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){

		int N;
		cin>>N;
		int a[N];

		for(int i=0;i<N;i++) cin>>a[i];

		int MAX = 0;
		for(int i=0;i<N;i++) {
			int count = 0;
			for(int j=i;j<N;j++){
				if(a[i] == a[j]) {
					count++;
				}
			}
			if(MAX<count) {
				MAX = count;
			}
		}
		cout<<N-MAX<<endl;
	}
	return 0;
}
