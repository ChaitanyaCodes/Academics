//Implementation of Quick Sort Algorithm and obtain its step count 

#include<iostream>
using namespace std;

int count=0;

void swap(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
	count=count+3;	
}

int partition(int arr[], int low, int high)
{
	int pivot=arr[high];
	count=count+1;	
	int i=low-1;
	count=count+1;	
    for(int j=low; j<=high-1; j++)
    {
        count=count+1;	
        count=count+1;	
        if (arr[j]<pivot)
        {
            i++;
            count=count+1;
			swap(arr[i], arr[j]);
        }
    }
    count=count+1;	
    swap(arr[i + 1], arr[high]);
    count=count+1;
	return (i + 1);	
}

void quickSort(int arr[], int low, int high)
{
	count=count+1;	
	if(low<high)
	{
        int pi = partition(arr,low,high);
        count=count+1;
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
	}
}

int main()
{
	int arr[50],n;
	cout<<"-----------------------------"<<endl;
	cout<<"Enter Size of the Array "<<endl;
	cout<<"-----------------------------"<<endl;
	count=count+1;	
	cin>>n;
	count=count+1;	
	cout<<"-----------------------------"<<endl;
	cout<<"\nEnter "<<"Elements of Array"<<endl;
	cout<<"-----------------------------"<<endl;
	count=count+1;	
	for(int i=0;i<n;i++)
	{
		count=count+1;	
		cin>>arr[i];
		count=count+1;
	}
	count=count+1;	
	quickSort(arr,0,n-1);
	cout<<"-----------------------------"<<endl;
	cout<<"Sorted Array "<<endl;
	cout<<"-----------------------------"<<endl;
	count=count+1;
	for(int i=0;i<n;i++)
	{
		count=count+1;	
		cout<<arr[i]<<" ";	
		count=count+1;
	}
	count=count+1;
	count=count+1;
	count=count+1;	
	cout<<"\n******************"<<endl;
	cout<<"Step Count "<<count;
	cout<<"\n******************"<<endl;
	return 0;	
}

