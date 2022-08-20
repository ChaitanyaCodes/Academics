//Implementation of BellmanFord algorithm (Dynamic Programming) and estimate its step count

#include<bits/stdc++.h>
using namespace std;
int c=0;
typedef struct  edge{
	int x,y,w;
};

void path(vector<int> parent,int i)
{
	c++;
	if(parent[i]==-1) 
	{
		c++;
	    return;
	}
	
	path(parent,parent[i]);
	c++;
	cout<<" - "<<i<<" ";
}


void printPath(vector<int> parent,int src,int n)
{
	for(int i=0;i<=n;i++)
	{
		c++;
		c++;
		cout<<"Path to  "<<i<<" from "<<src<<" : ";
		cout<<src<<" ";
		path(parent,i);
		
		c++;
		cout<<endl;
	}
	c++;
}


void bellmonFord(vector<edge> v,int n,int e,int S)
{
	vector<int> dist(n+1);
	for(int i=1;i<=n;i++)
	dist[i] = INT_MAX,c++;
	c++;
	dist[S] = 0;
	vector<int> parent(n+1,-1);
	for(int i=1;i<n;i++)
	{
		c++;
		for(int j=0;j<e;j++)
		{
			c++;
			c++;
			int src = v[j].x;
			c++;
			int dest = v[j].y;
			c++;
			int W = v[j].w;
		c++;
		if(dist[src]!=INT_MAX&&dist[dest]>dist[src]+W)
			{
				c++;
				dist[dest] = dist[src]+W;
				c++;
		        		parent[dest] = src;	
			}
			c++;
		}
		c++;
	}
	for(int j=0;j<e;j++)
		{
			c++;
			c++;
			int src = v[j].x;
			c++;
			int dest = v[j].y;
			c++;
			int W = v[j].w;
			c++;
			if(dist[dest]>dist[src]+W)
			{
				c++;
				cout<<"Negetive Edge Cycle"<<endl;
				
				c++;
				return;
			} 
		}
		c++;
		for(int i=1;i<=n;i++)
		{
			c++;
			c++;
cout<<"The Distance From "<<S<<" To "<<i<<" = "<<dist[i]<<endl;
		}
		c++;
		printPath(parent,S,n);
}
int main()
{
	int n,e;
	cout<<"**************************"<<endl;
	cout<<"Enter The No of Vertices: ";
	cout<<"\n**************************"<<endl;
	cin>>n;
	cout<<"**************************"<<endl;
	cout<<"Enter The No of Edges: ";
	cout<<"\n**************************"<<endl;
	cin>>e;
	vector<edge> v(e);
	for(int i=0;i<e;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		v[i].x=x;
		v[i].y=y;
		v[i].w=w;
	}
	int S;
	cout<<"**************************"<<endl;
	cout<<"Enter Souce Vertex: "<<endl;
	cout<<"\n**************************"<<endl;
	cin>>S;
	bellmonFord(v,n,e,S);
	cout<<"Step Count: "<<c;
}

