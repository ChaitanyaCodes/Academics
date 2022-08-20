//Implementation of Minimum Cost Spanning Tree(Using Prim's Algo) and estimate its step count

#include<bits/stdc++.h>
using namespace std;
int c=0;
void primsAlgo(	vector<vector<pair<int, int>>> v,int n)
{
    bool visited[n+1];
    int parent[n+1];
    int cost[n+1];
    memset(visited,false,sizeof(visited));
    memset(parent,-1,sizeof(parent));

	for(int i=1;i<=n;i++) {
	  c++; //for for loop
	  cost[i] = INT_MAX;
	  c++;//for assignment
	}
              c++;//for last for loop

	c++;//for assigning cost 0 to first vertex
    cost[1] = 0;


	int total=0;
	int edges = 0;
	while(edges!=n-1)
	{
	c++;//for while loop
    int x;
    int min=INT_MAX;
    for(int i=1;i<=n;i++)
    {
    	c++;//for loop
    	c++;//for if
    	if(visited[i]==false&&cost[i]<min)
    	{

    		min = cost[i];
    		c++;//for assignment
    		x=i;
    		c++;//for assignment
		}
	}
    c++;//for last for loop
	visited[x] = true;
	c++;//for assigning true value


	for(auto i:v[x])
	{
		c++;// for loop
		c++;//for if
		if(visited[i.first]==false&&i.second<cost[i.first])
		{
			cost[i.first] = i.second;
			c++;//for assignemt
			parent[i.first] = x;
			c++;//for assignment
		}
	}
	c++;//for last for loop

	edges++;
	c++;//for increamenting

	}
	c++;//for last while loop
	for(int i=2;i<=n;i++)
	{
		c++;//if condition
		if(cost[i]!=INT_MAX)
		{
		cout<<i<<" < - > "<<parent[i]<<" cost: "<<cost[i]<<endl<<endl;
		c++;//for cout
		total+=cost[i];
		c++;
		}
	}
	cout<<"**************************"<<endl;
	cout<<"Total Cost: "<<total<<endl;
	cout<<"**************************"<<endl;
	c++;
}
int main()
{
	int n,m;
	cout<<"*********************************"<<endl;
	cout<<"Enter the no of Vertices and Edges"<<endl;
	cout<<"*********************************"<<endl;
	cin>>n>>m;
	vector<vector<pair<int,int>>> v(n+1);
	cout<<"Enter edges"<<endl;
		for(int j=0;j<m;j++)
		{

			int x,y,w;
			cin>>x>>y>>w;
			v[x].push_back({y,w});
			v[y].push_back({x,w});
		}


    primsAlgo(v,n);
    cout<<"********************"<<endl;
	cout<<"Step Count: "<<c<<endl;
	cout<<"*********************"<<endl;
}

