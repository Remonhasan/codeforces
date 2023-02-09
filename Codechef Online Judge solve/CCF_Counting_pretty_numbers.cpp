#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    int S,E;
	    cin>>S>>E;
	    int totalCount = 0;
		for(int i=S;i<=E;i++){
			if(i%10 == 2 || i%10 == 3 || i%10 == 9){
				totalCount++;
			}
		}
		cout<<totalCount<<endl;
	  
	}
	return 0;
}
