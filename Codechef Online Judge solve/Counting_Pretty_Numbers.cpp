// Array Problem 
// Remon Hasan

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Problem(vector<int> arr[2])
{
	vector< int > firstStore;
	vector< int > secondStore;
	
	for(int i=arr.front();i<arr.back();i++){
		
		cout<<arr[i]<<endl;	
	}

	
}

int main() {
	
	
	vector< int > initial[2];
	int a,b;
	cin>>a>>b;
	initial.push_back(a);
	initial.push_back(b);
    Problem(initial);

	
	return 0;
}
