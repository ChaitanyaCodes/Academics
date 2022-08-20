//Implementation of N-Queens problem (Using Backtracking)

#include<iostream>
using namespace std;

int stepcount=0;
bool isSafe(int** arr, int x,int y,int n)
{
    for(int row =0; row<x;row++)
    {
        stepcount++;

        if(arr[row][y]==1)
        {
        	stepcount++;
        	return false;
        }
    }
	stepcount++;
	int row =x;
	stepcount++;
	int col =y;
	stepcount++;
    while(row>=0 && col>=0)
    {
        stepcount++;
        if(arr[row][col]==1)
        {
            stepcount++;
            return false;
        }
		row--;
		stepcount++;
		col--;
		stepcount++;
	}
	stepcount++;
	row =x;
	stepcount++;
	col =y;
	stepcount++;
    while(row>=0 && col<n)
    {
        stepcount++;
        if(arr[row][col]==1)
        {
            stepcount++;
            return false;
        }
        row--; 
		stepcount++;
        col++; 
		stepcount++;
    }
	return true;
}

bool nQueen(int** arr, int x, int n)
{
    stepcount++;
    if(x>=n)
    {
        stepcount++;
        return true;
    }
    for(int col =0;col<n;col++)
    {
        stepcount++;
        if(isSafe(arr,x,col,n))
        {
            arr[x][col] =1;
			stepcount++;
            stepcount++;
            if(nQueen(arr,x+1,n))
            {
                stepcount++;
                return true;
            }
            arr[x][col]=0; 
			stepcount++;
        }
    }
    stepcount++;
    return false;
}

int main()
{
	int n;
	cout<<"Enter the value of N: "; 
	cin>>n; 
	int** arr = new int*[n]; 
	stepcount++;
 	for(int i=0;i<n;i++)
    {
    	stepcount++;
    	arr[i]= new int [n]; for(int j=0;j<n;j++)
    	{
    		arr[i][j]=0; 
			stepcount++;
    	}
    }
 	stepcount++;
    if(nQueen(arr,0,n))
    { 
        for(int i=0;i<n;i++)
        {
            stepcount++;
            for(int j=0;j<n;j++)
            {
                stepcount++;
                cout<<arr[i][j]<<" ";
            }
			cout<<endl;stepcount++;
        }
    }
    cout<<"\n*******************"<<endl;
	cout<<"Total Steps = "<<stepcount<<endl;
	cout<<"*******************"<<endl;
}


