//Iterative and Recursive Binary Search Algorithm Using Divide and Conquer & Estimating Its Step Count

#include<iostream>
using namespace std;
int count = 0;
int BinSrch(int arr[],int first,int last,int element)
{
    	count++;
   	 if(last==first)
    	{
        		count++;



        		if (element==arr[first])
        		{
          			count++;
            			return first;
       		 }
       		 else
        		{
          			count++;
           			return 0;
        	}
    }
    else
    {
        	count++;
int mid=(first+last)/2;
	count++;
	if(element==arr[mid])
{
           		count++;
            		return mid;
        	}
else if (element<arr[mid])
{
           		count++;
            		return BinSrch(arr,first,mid-1,element);
       	 }
        	else
        	{
            		count++;
            		return BinSrch(arr,mid+1,last,element);
        	}

   	 }
    		count++;
    		return -1;
}
int binsrchi(int arr[],int last, int x)
{
   	count++;
    	int low=1;
    	count++;
    	int high =last;
    	count++;
    	while(low<=high)
    	{
count++;
int mid = (low+high)/2;
count++;
if(x<arr[mid])
return high = mid - 1;
else if(x>arr[mid])
return low =mid +1;
else return mid;
    	}
}
int main()
{
    	count++;
    	int a[]={-30,-40,50,60,70,80,90};
    	count++;
   	int n = 7;
    	count++;
   	int x = 70;
    	count++;
   	int y = 50;
    	count++;
    	int element_found = BinSrch(a,0,n-1,x)+1;
    	count++;
    	if(element_found == -1 )
    	{
        		count++;
        		cout<<"Element Not Found";
   	 }
   	else
    	{
        		cout<<"-----------------"<<endl;
        		cout<<"Recursion Methord"<<endl;
        		cout<<"-----------------"<<endl;
        		cout<<endl<<"Element Found at Position = "<<element_found<<endl;
        		cout<<endl<<endl;
        		cout<<"*********************************"<<endl;
        		cout<<"Recursive Count = "<<count<<endl;
        		cout<<"*********************************"<<endl;
   	}
   	count++;
    	int output2 = binsrchi(a,n,y);
   	cout<<"-----------------"<<endl;
   	cout<<"Iterative Methord"<<endl;
    	cout<<"-----------------"<<endl;
    	cout<<endl<<"Element Found at Position = "<<output2<<endl;
    	cout<<endl<<endl;
    	cout<<"*********************************"<<endl;
    	cout<<"Iterative Count = "<<count<<endl;
    	cout<<"*********************************"<<endl;
   	return 0;
}

