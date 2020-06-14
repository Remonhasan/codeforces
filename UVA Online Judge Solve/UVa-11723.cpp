/* Author: Remon Hasan
   Problem: 10723
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pb push_back
#define ll long long
#define NUM_ALPHA 26

int main(void)
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
 */
	int numRoad, numInt, caseId, numAddAlpha, numName;

	caseId = 1;
	while(1)
	{
		scanf("%d %d", &numRoad, &numInt);
		if(numRoad == 0 && numInt == 0)
			break;
	
		numName = numInt;
		for(numAddAlpha = 0; numAddAlpha <= NUM_ALPHA; numAddAlpha++)
		{
			if(numName >= numRoad)
				break;
			numName += numInt; 
		}

		printf("Case %d: ", caseId);
		if(numAddAlpha > NUM_ALPHA)
			printf("impossible\n");
		else
			printf("%d\n", numAddAlpha);

		caseId++;		
	}
	return 0;
}
