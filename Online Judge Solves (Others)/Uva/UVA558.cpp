// Remon Hasan

#include <cstdio>
#include <vector>

using namespace std;

struct Edge
{
	int from, to, weight;

	Edge() : from(0), to(0), weight(0) {}
	Edge(int iFrom, int iTo, int iWeight) : from(iFrom), to(iTo), weight(iWeight) {}
	Edge(const Edge & another): from(another.from), to(another.to), weight(another.weight) {} 
};

const int INFINITY = 2000000000;

bool detectNegativeCycle(int numV, const vector<Edge> & edgeList);

int main(void)
{
	int T, numV, numE;
	vector<Edge> edgeList;

	scanf("%d", &T);
	while(T)
	{
		scanf("%d %d", &numV, &numE);
		
		edgeList.assign(numE, Edge());
		for(int e = 0; e < numE; e++)
			scanf("%d %d %d", &edgeList[e].from, &edgeList[e].to,
				&edgeList[e].weight);

		if(detectNegativeCycle(numV, edgeList))
			printf("possible\n");
		else
			printf("not possible\n");

		T--;
	}	
	return 0;
}

bool detectNegativeCycle(int numV, const vector<Edge> & edgeList)
{
	vector<int> dist(numV, INFINITY);
	dist[0] = 0;

	for(int v = 0; v < numV - 1; v++)
		for(int eInd = 0; eInd < (int) edgeList.size(); eInd++)
		{
			const Edge & e = edgeList[eInd];
			
			if(dist[e.from] == INFINITY)
				continue;

			if(dist[e.to] > dist[e.from] + e.weight)
				// Relax
				dist[e.to] = dist[e.from] + e.weight;
		}

	for(int eInd = 0; eInd < (int) edgeList.size(); eInd++)
	{
		const Edge & e = edgeList[eInd];

		// If we still can relax this edge, a negative weight cycle exists
		if(dist[e.to] > dist[e.from] + e.weight)
			return true;
	}

	return false;
}
