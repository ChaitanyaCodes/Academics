//Implementation of Single Source Shortest Path Algo (Dijkstra's Algo) and estimate its step count


#include<iostream>
using namespace std;
#define V 6
int stepcount=0;
int space =0;
int minDistance(int dist[], bool sptSet[])
{
	int min = INT_MAX;stepcount++;
	int min_index;

	for (int v = 0; v < V; v++)
    {
        stepcount++;
        stepcount++;
        if (sptSet[v] == false && dist[v] <= min)
        {
            min = dist[v], min_index = v;stepcount++;
        }
    }

  	stepcount++;
	return min_index;
}
void printSolution(int dist[])
{
    cout<<"Vertex \t\t Distance from Source"<<endl;stepcount++;
	for (int i = 0; i < V; i++)
    {
          stepcount++;
          cout<<i<<"\t\t\t"<<dist[i]<<endl;stepcount++;
    }

}

void dijkstra(int graph[V][V], int src)
{
	int dist[V];
	bool sptSet[V];
	for (int i = 0; i < V; i++)
    {
    	stepcount++;
    	dist[i] = INT_MAX, sptSet[i] = false;stepcount++;
    }
	dist[src] = 0;stepcount++;


	for (int count = 0; count < V - 1; count++) 
	{
        stepcount++;
		int u = minDistance(dist, sptSet);stepcount++;
		sptSet[u] = true;stepcount++;
		for (int v = 0; v < V; v++)
        {
            stepcount++;
            stepcount++;
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
				&& dist[u] + graph[u][v] < dist[v])
				{
				    dist[v] = dist[u] + graph[u][v];stepcount++;
				}
        }
	}
    stepcount++;
	printSolution(dist);
}

int main()
{
    int graph[V][V];
	cout<<"Enter the vertices for a graph with 6 vetices:";stepcount++;
    for (int i=0;i<V;i++)
    {
        stepcount++;
        for(int j=0;j<V;j++)
        {
            stepcount++;
			cin>>graph[i][j];stepcount++;
        }
    }
    stepcount++;
	dijkstra(graph, 0);
	cout<<"*************"<<endl;
   	cout<<"Stepcount:"<<stepcount<<endl;
   	cout<<"*************"<<endl;
   	cout<<"Time Complexity: "<<endl;
   	space+=3*sizeof(float);
   	cout<<"Space Count: "<<space<<endl;
    return 0;
}

