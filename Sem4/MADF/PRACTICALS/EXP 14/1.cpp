//Implementation of Brute Force and Boyer-Moore Pattern Matching Algorithm
//BRUTE FORCE APPROACH
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int c,d;
	cout<<"*************************"<<endl;
	cout<<"Enter The String:"<<endl;
	cin>>a;
	cout<<"*************************"<<endl;	
	cout<<"Enter The Pattern:"<<endl;
	cin>>b;
	cout<<"*************************"<<endl;
	c=a.size();
	d=b.size();
	int x=0;
	for(int i=0;i<=c-d;i++)
	{
		int j=0;
		while(j<d&&a[i+j]==b[j])
		j++;
		if(j==d)
		{
		  cout<<"*************************"<<endl;
		  cout<<"The Pattern Matches At "<<i<<endl;
		  cout<<"*************************"<<endl;
		  x=1;
		  break;  	
		}
		  
	}
	
	if(x==0)
	cout<<"No Such Pattern Available"<<endl;
}

