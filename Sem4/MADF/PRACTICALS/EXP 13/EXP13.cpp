//Implementation of Graph Coloring problem
#include<bits/stdc++.h>
using namespace std;

void mColoring(int p,vector<int> q);
void nextvalue(vector<int> &q,int p);

void print(vector<int> q);
vector<vector<int>> v;
int r;
int s;
int done=0;
int main()
{
   cout<<"Enter no of vertices"<<endl;
   cin>>r;
   v.resize(r+1,vector<int>(r+1));
   for(int i=1;i<=r;i++)
     for(int j=1;j<=r;j++)
	 	v[i][j] = 0;
   cout<<"Enter s"<<endl;
   cin>>s;
   cout<<"Enter no of edges"<<endl;
   int e;
   cin>>e;
   cout<<"Enter edges"<<endl;
   for(int i=1;i<=e;i++)
   {
   	   int q,y,w;
   	   cin>>q>>y;
   	   v[q][y] = 1;
   	   v[y][q] = 1;
   }
   
   vector<int> q(r+1,0);
   mColoring(1,q);
   if(done==0) cout<<"No solutions"<<endl;
}

void mColoring(int p,vector<int> q)
{
	
	do {
		
		nextvalue(q,p);
		if(q[p]==0) return;
		if(p==r) print(q);
		else mColoring(p+1,q);
	}while(true);
}

void nextvalue(vector<int> &q,int p)
{
	do{
	
		q[p] = (q[p] +1)%(s+1);
		if(q[p]==0) return;
		int j;
		for(j=1;j<=r;j++)
		{
			if(v[p][j]!=0&&q[j]==q[p])
			break;
			
		}
	
		if(j==r+1) return;
	}while(true);
}
void print(vector<int> q)
{
	done++;
	cout<<"SOLUTION  "<<done<<endl;
	cout<<endl<<"------------------------"<<endl;
	for(int i=1;i<=r;i++)
	{
		cout<<q[i]<<" ";
	}
	cout<<endl<<"------------------------\n"<<endl;
}

