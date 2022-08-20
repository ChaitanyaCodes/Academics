//Implementation of KMP Pattern Matching Algorithm
#include<bits/stdc++.h>
using namespace std;
void kmpFailure(vector<int> &X,string b);
int main()
{
	string a,b;
	int y,z;
	cout<<"***************************"<<endl;
	cout<<"Enter The String:"<<endl;
	cin>>a;
	cout<<"***************************"<<endl;
	cout<<"Enter The Pattern:"<<endl;
	cin>>b;
	y=a.size();
	z=b.size();
	int found=0;
    vector<int> X(z,0);
    kmpFailure(X,b);
    int c=0,i=0,j=0;
    while(i<y)
    {
    	
    	if(b[j]==a[i])
    	{
    		
    		if(j==z-1)
    		{
    			cout<<"***************************"<<endl;
				cout<<"The Patter Matches At : "<<i-z+1<<endl;
				cout<<"***************************"<<endl;
    			found=1;
    			break;
			}
			i++;
			j++;
		}
		else if(j>0)
		j=X[j-1];
		else i++;
	
	}
	if(found==0)
	cout<<"No Such Pattern Found"<<endl;
}
void kmpFailure(vector<int> &X,string b)
{
	int i=1,j=0;
	X[0] = 0;
	while(i<b.size())
	{
		if(b[i]==b[j])
		{
			X[i] = j+1;
			i++;
			j++;
		}else if(j>0){
			j=X[j-1];
		}else{
			X[i] = 0;
			i++;
		}
	}
}

