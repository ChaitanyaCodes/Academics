// Implementation of Knapsack Problem (Greedy Approach) and obtain its step count 

#include<iostream>
using namespace std;
int ctr; float static pr[20], wt[20], x[20];
void GreedyKnapsack(int m, int n)
{
	ctr++;
	int u=m;	ctr++;
	float sum=0.0;	ctr++;
	for(int i=0; i<n; i++)
	{
		x[i]=0.0; ctr++;
	}
	ctr++;
	int i;
	for( i=0; i<n; i++)
	{
		ctr++;
		ctr++;
		if(wt[i] > u)
		break;
		x[i]=1.0;	ctr++;
		u = u-wt[i];	ctr++;
		sum= sum+(pr[i]*x[i]);	ctr++;
	}
	ctr++;
	ctr++;
	if(i<=n)
	{
		x[i] = float(u/wt[i]);	ctr++;
		sum= sum+(pr[i]*x[i]);	ctr++;
	}
	cout<<"\n\n*********************"<<endl;
	cout<<"SOLUTION VECTOR: ";	ctr++;

	for(int i=0; i<n; i++)
	{
		ctr++;
		cout<<x[i]<<"  ";ctr++;
	}
	cout<<"\n*********************"<<endl;
	ctr++;
	cout<<"\n\n*********************"<<endl;
	cout<<"MAXIMUM PROFIT: "<<sum<<endl;	ctr++;
	cout<<"*********************"<<endl;
	ctr++;
}
int main()
{
	int n, m;
	cout<<"\nENTER NUMBER OF ELEMENTS(n): \n";	ctr++;
	cin>>n;	ctr++;
	cout<<"\nENTER CAPACITY(m): \n";	ctr++;
	cin>>m;	ctr++;
	cout<<"\nENTER PROFITS: "<<"\n";	ctr++;
	for(int i=0; i<n; i++)
	{
		cin>>pr[i];	ctr++;
	}
	ctr++;
	cout<<"\nENTER WEIGHTS: "<<"\n";	ctr++;
	for(int i=0; i<n; i++)
	{
		cin>>wt[i];	ctr++;
	}
	ctr++;
	float ratio[n], temp;	ctr++;
	for (int i = 0; i < n; i++)
	{
		ctr++;
      	ratio[i] = pr[i] / wt[i];	ctr++;
  	}
  	ctr++;
	for (int i = 0; i < n; i++) 
	{
		ctr++;
      		for (int j = 0; j < n; j++) 
			{
	 	 			ctr++;
	 	 			ctr++;
         			if (ratio[j] < ratio[j+1]) 
					{
	            		temp = ratio[j];	ctr++;
	            		ratio[j] = ratio[j+1];	ctr++;
	            		ratio[j+1] = temp;	ctr++;
	 
	           			temp = wt[j];	ctr++;
	            		wt[j] = wt[j+1];	ctr++;
	            		wt[j+1] = temp;	ctr++;
	 
	            		temp = pr[j];	ctr++;
	            		pr[j] = pr[j+1];	ctr++;
	            		pr[j+1] = temp;	ctr++;
	        		}
      		}
      		ctr++;
   	}
   	ctr++;
   	cout<<"\nPROFITS: "<<endl;	ctr++;
	for(int i=0; i<n; i++)
	{
		ctr++;
		cout<<pr[i]<<"  ";ctr++;
	}
	cout<<"\nWEIGHTS: "<<endl;	ctr++;
	for(int i=0; i<n; i++)
	{
		ctr++;
		cout<<wt[i]<<"  ";ctr++;
	}
	GreedyKnapsack(m, n);
	cout<<"\n\n**************"<<endl;
	cout<<"STEP COUNT: "<<ctr<<endl;
	cout<<"**************"<<endl;
	return 0;
}

