//Implementation of Brute Force and Boyer-Moore Pattern Matching Algorithm
//THE BOYER-MOORE APPROACH
#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
	if(a<b) return a;
	return b;
}
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
	vector<int> last(27,-1);
	for(int i=0;i<d;i++)
	{
		last[int(b[i])-97]=i;
	}
	
	int i=d-1,j=d-1;
	do{
		if(b[j]==a[i])
		{
		   
		   if(j==0)
		   {
		   	x=1;
		  	cout<<"*************************"<<endl;
		  	cout<<"The Pattern Matches At "<<i<<endl;
		  	cout<<"*************************"<<endl;
		   	break;
		   }
		   i--;
		   j--;	
		}else{
			cout<<a[i]<<b[j]<<endl;
			i=i+d-min(j,last[int(a[i]-97)]+1);
		
			j=d-1;
		}
		
	}while(i<c);
	
	if(x==0)
	cout<<"No Such Pattern Available"<<endl;
}

