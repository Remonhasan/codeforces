// Array Problem 
// Remon Hasan

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void removeMinimum(int arr[], int size)
{
	vector< int > store;

	for(int i=0;i<size;i++)
	{
		if(arr[i]>=1000){
			store.push_back(arr[i]);
		}
	}
	cout<<store.size()<<endl;
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    }
	    removeMinimum(a,n);

	}
	return 0;
}
