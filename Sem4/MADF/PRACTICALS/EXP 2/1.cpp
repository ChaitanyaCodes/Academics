//Implementation of Merge Sort Using Divide and Conquer and obtain its step count 

#include<iostream>
using namespace std;
int count = 0;
int a[10]={1,2020,28,852,852,8,85,8,50,25};
int b[10];
void Merge(int low,int mid,int high)
{
    	count++;
	int h=low, i=low,j=mid+1;
	while((h<=mid)&&(j<=high))
    	{
        		count++;
		if(a[h]<=a[j])
		{
          			b[i]=a[h];
			h=h+1;
		}
		else
		{
			b[i]=a[j];
			j++;
		}
		i=i+1;
	}
  	count++;
    	if(h>mid)
    	{
       		count++;
      		for(int k=j;k<=high;k++)
       		{
            			b[i]=a[k];
            			i++;
        		}
    	}
    	else
    	for(int k=h;k<=mid;k++)
   	{
        		b[i]=a[k];
        		i++;
    	}
    	for(int k=low;k<=high;k++)
    	{
        		a[k]=b[k];
   	}
}
void mergesort(int low,int high)
{
	if(low<high)
    	{
       	count++;
        	int mid = (low+high)/2;
       	mergesort(low,mid);
        	mergesort(mid+1,high);
        	Merge(low,mid,high);
    	}
}

int main()
{
	int size;
        	cout<<"-----------------"<<endl;
	cout << "BEFORE MERG SORT  "<<endl;
	cout<<"-----------------"<<endl;
	count++;
    	for(int i=0;i<10;i++)
        	cout << a[i]<<" ";
        	cout<<endl<<endl;
       	cout<<"-----------------"<<endl;
        	cout << "AFTER MERG SORT  "<<endl;
	cout<<"-----------------"<<endl;
        	mergesort(0,9);
       	count++;
	for(int i=0;i<10;i++)
        	cout << a[i]<<" ";
        	cout<<endl<<endl;
        	cout<<"*************"<<endl;
        	cout<<"Count = "<<count<<endl;
        	cout<<"*************"<<endl;
}

