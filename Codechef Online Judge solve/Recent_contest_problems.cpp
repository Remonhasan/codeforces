// Array Problem 
// Remon Hasan

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Problem(string arr[], int size)
{
	vector< string > firstStore;
	vector< string > secondStore;

	for(int i=0;i<size;i++)
	{
		if(arr[i] == "START38"){
			firstStore.push_back(arr[i]);
		}
		else{
			secondStore.push_back(arr[i]);
		}
	}
	cout<<firstStore.size()<<" "<<secondStore.size()<<endl;
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a[n];
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    }
	    Problem(a,n);

	}
	return 0;
}
