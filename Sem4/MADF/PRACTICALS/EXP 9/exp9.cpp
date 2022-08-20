// Implementation of OBST using Dynamic Programming and estimate its step count
#include<iostream>
#include<iomanip>
using namespace std;
int stepcount=0;
class OBST{

	float w[20][20];    //weight of OBST tij
	float c[20][20];    //cost of OBST tij
	float r[20][20];    //root of OBST tij
	public:
		int n;
		float p[20],q[20];
		void printpath(int i,int j);
		void OBST_algo(void);
		int Find(int i, int j);
};
int OBST::Find(int i, int j)
{
	int min=INT_MAX;stepcount++;
	int l=0;stepcount++;

	for(int m=r[i][j-1];m<=r[i+1][j];m++)
	{
		stepcount++;
		stepcount++;
		if((c[i][m-1]+c[m][j])<min)
		{
			min=c[i][m-1]+c[m][j];stepcount++;
			l=m;stepcount++;
		}
	}
	stepcount++;
	stepcount++;return l;
}
void OBST::printpath(int i,int j)
{
	stepcount++;
	if(i==j)
	{
		cout<<" null "<<endl;stepcount++;
		stepcount++;return;
	}
	cout<<r[i][j]<<endl;stepcount++;
	cout<<"Left Child of "<<r[i][j]<<" : ";stepcount++;
	printpath(i,r[i][j]-1);stepcount++;
	cout<<"Right Child of "<<r[i][j]<<" : ";stepcount++;
	printpath(r[i][j],j);stepcount++;
}
void OBST::OBST_algo(void)
{
	for(int i=0;i<n;i++)
	{
		stepcount++;
		w[i][i]=q[i];stepcount++;
		r[i][i]=0;stepcount++;
		c[i][i]=0.0;stepcount++;

		w[i][i+1]=q[i]+q[i+1]+p[i+1];stepcount++;
		r[i][i+1]=i+1;stepcount++;
		c[i][i+1]=q[i]+q[i+1]+p[i+1];stepcount++;

	}
	stepcount++;
	stepcount++;
	w[n][n]=q[n];stepcount++;
	r[n][n]=0;stepcount++;
	c[n][n]=0.0;stepcount++;
	for(int m=2;m<=n;m++)
	{
		stepcount++;
		for(int i=0;i<=n-m;i++)
		{
			stepcount++;
			int j=i+m;stepcount++;
			w[i][j]=w[i][j-1]+p[j]+q[j];stepcount++;
			int k=Find(i,j);stepcount++;
			c[i][j]=w[i][j]+c[i][k-1]+c[k][j];stepcount++;
			r[i][j]=k;stepcount++;

		}
		stepcount++;
	}

	cout<<"\n  | ";stepcount++;

    for(int i=0;i<=n;i++)
    {
    	stepcount++;
    	cout<<setw(10)<<i<<" | ";stepcount++;
	}
	stepcount++;
    cout<<endl<<"---------------------------------------------------------------------------------------------------"<<endl;stepcount++;

	for(int m=0;m<=n;m++)
    {
    	stepcount++;
    	cout<<m<<" | ";stepcount++;
    	for(int i=0,j=m;i<=n&&j<=n;i++,j++)
    	{
    		stepcount++;
			cout<<"w("<<i<<","<<j<<") "<<w[i][j]<<"   | ";stepcount++;

		}
		stepcount++;
		cout<<"\n  | ";stepcount++;

		for(int i=0,j=m;i<=n&&j<=n;i++,j++)
    	{
    		stepcount++;
			cout<<"c("<<i<<","<<j<<") "<<c[i][j]<<"   | ";stepcount++;
		}
		stepcount++;
		cout<<"\n  | ";stepcount++;

		for(int i=0,j=m;i<=n&&j<=n;i++,j++)
    	{
    		stepcount++;
   			cout<<"r("<<i<<","<<j<<") "<<r[i][j]<<"   | ";stepcount++;
		}
		stepcount++;
		cout<<endl<<"-------------------------------------------------------------------------------------"<<endl;stepcount++;

	}
    stepcount++;
    cout<<"Minimum Cost : "<<c[0][n]<<endl;stepcount++;
	cout<<"Root : ";stepcount++;
	stepcount++;printpath(0,n);
}
int main()
{
	class OBST T;
	cout<<"Enter the Number of Identifier : ";stepcount++;
	cin>>T.n;stepcount++;
	cout<<"Enter probabilities of P : ";stepcount++;
	for(int i=1;i<=T.n;i++)
	{
		stepcount++;
		cin>>T.p[i];stepcount++;
	}
	stepcount++;
	cout<<"Enter probabilities of Q : ";stepcount++;
	for(int i=0;i<=T.n;i++)
	{
		stepcount++;
		cin>>T.q[i];stepcount++;

	}
	stepcount++;
	T.OBST_algo();stepcount++;
	stepcount++;
	cout<<"\n****************"<<endl;
	cout<<"Step Count = "<<stepcount<<endl;
	cout<<"****************"<<endl;
	return 0;
}
