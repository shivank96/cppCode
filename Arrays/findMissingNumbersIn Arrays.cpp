#include<iostream>
using namespace std;

void insertIntoArray(int a[],int b[],int n)
{
	cout<<"Enter the elements you want in an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	b[n-1]=0;
}

void displayToDebug(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int a[n],b[n+1];
	
	insertIntoArray(a,b,n);
	
	for(int i=0;i<n;i++)
	{
		b[a[i]]+=1;
	}
	
	//not considering zero or index zero in the array rather directly starting from 1
	
	cout<<"The missing number/number's are:"<<endl;
	
	for(int i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			cout<<i<<" ";
		}
	}
	
	cout<<endl<<"The repeating numbers are"<<endl;
	
	//not considering zero or index zero in the array rather directly starting from 1
	
	for(int i=1;i<=n;i++)
	{
		if(b[i] >1)
		{
			cout<<i<<" ";
		}
	}
}
