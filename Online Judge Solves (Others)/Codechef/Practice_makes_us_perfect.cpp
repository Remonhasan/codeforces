// Array Problem 
// Remon Hasan

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void targetWeek(int arr[])
{
	vector< int > store;

	for(int i=0;i<4;i++)
	{
		if(arr[i]>=10){
			store.push_back(arr[i]);
		}
	}
	cout<<store.size()<<endl;
}

int main() {
	
    int a[4];
    for(int i=0;i<4;i++)
    {
    	cin>>a[i];
    }
    targetWeek(a);
	
	return 0;
}
