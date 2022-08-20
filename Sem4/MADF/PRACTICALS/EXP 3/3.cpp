//Implementation of MaxMin Algorithm and obtain its step count 
#include<iostream>
using namespace std;
int a[100];
int steps=0;
void maxmin(int,int,int&,int&);
int main()
{
    int n,s,loc,x,y;
    cout<<"-------------------------------------"<<endl;
    cout<<"Enter Number of Terms for the Array:\n";
    cout<<"-------------------------------------"<<endl;
    steps++;
    cin>>n;
    steps++;
    cout<<"------------------------------------"<<endl;
    cout<<"Enter "<<n<<" Terms for the Array:\n";
    cout<<"------------------------------------"<<endl;
    steps++;
    for(int i=0;i<n;i++)
    {
        steps++;
        cin>>a[i];
        steps++;
    }
    steps++;
    maxmin(0,n-1,x,y);
    steps++;
    cout<<"\n\nThe Maximum Element is: "<<x<<endl;
    cout<<"The Minimum Element is: "<<y<<endl;
    steps+=2;
    cout<<"\n*****************"<<endl;
    cout<<"Total Steps= "<<steps<<endl;
    cout<<"*****************"<<endl;
}
void maxmin(int i,int j,int& max,int& min)
{
    int max1,min1,mid;
    steps++;
    if(i==j)
    {
        max=min=a[i];
        steps+=2;
    }
    else if(i==j-1)
    {
        steps++;
        steps++;
        if(a[i]<a[j])
        {
            max=a[j];
            min=a[i];
            steps+=2;
        }
        else
        {
            max=a[i];
            min=a[j];
            steps+=2;
        }
    }
    else
    {
        steps++;
        mid=(i+j)/2;
        steps++;
        maxmin(i,mid,max,min);
        steps++;
        maxmin(mid+1,j,max1,min1);
        steps++;
        steps++;
        if(max<max1)
        {
            max=max1;
            steps++;
        }
        steps++;
        if(min>min1)
        {
            min=min1;
            steps++;
        }
    }
}

