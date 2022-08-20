// Implementation of Sum of Subset problem (Using Backtracking)

#include<bits/stdc++.h>
using namespace std;
int c=0;
void SumofSub(int s,vector<int>,int k,int m );
void print(vector<int> ,int);
vector<int> v;
int a,sum;
int main()
{
	int m=0,s=0,k=1;
	cout<<"Enter The Value of N : "<<endl;
	cin>>a;
	v.resize(a+1,0);
	vector<int> x;
	x.resize(a+1,0);
	cout<<"\nEnter The elements : "<<endl;
	for(int i=1;i<=a;i++)
	{
		cin>>v[i];
		m=m+v[i];
	}
	cout<<"\nEnter The sum : "<<endl;
	cin>>sum;
	for(int i=1;i<a;i++)
	{
		c++;
		for(int j=i;j<=a;j++)
		{
			c++;
			c++;
			if(v[i]>v[j])
			{
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
				c=c+3;
			}
		}
		c++;
		
	}
	c++;
    
	SumofSub(s,x,k,m);
	cout<<"***************"<<endl;
	cout<<"Step Counts: "<<c<<endl;
	cout<<"***************"<<endl;
}

void SumofSub(int s,vector<int> x,int k,int m )
{
    c++;
	if(k>a) return;
	c++;
	x[k] = 1;
	
	c++;
	if(s+v[k]==sum)
	{
		print(x,a);
	}
	else if(s+v[k]+v[k+1]<=sum)
	{
		c++;
		SumofSub(s+v[k],x,k+1,m-v[k]);
	}
	c++;
	if((s+m-v[k]>=sum)&&(s+v[k+1]<=sum))
	{
		c++;
		x[k]  = 0;
		SumofSub(s,x,k+1,m-v[k]);
	}
}

void print(vector<int> x,int a)
{
	cout<<endl<<"--------------------------------------"<<endl;
	
	for(int i=1;i<=a;i++)
	{
		c++;
		c++;
	    cout<<x[i]<<"  ";	
	}
	
	cout<<endl<<"The elements ( ";
	for(int i=1;i<=a;i++)
	{
	   c++;
	   c++;
	   if(x[i]==1)
	   {
	    	c++;
	   	    cout<<v[i]<<" ";	
	   }
	   
	}
	 
	cout<<")";   
	cout<<endl<<"--------------------------------------"<<endl;
}

