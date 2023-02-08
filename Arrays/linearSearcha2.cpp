#include<iostream>
using namespace std;

void insertIntoArray(int a[],int n)
{
	cout<<"Enter the elements you want in an array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void displayToDebug(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

/*int linearSearch(int a[],int n,int k)
{
    int flag;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag = i+1;
		} 
	}
	if(flag<0)
	{
		flag = -1;
	}
	return flag;
}*/

int* linearSearch(int a[],int n,int k)
{
    static int flag[1];
    flag[0]=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag[0] = i;
			return flag;
		} 
	}
	if(flag[0]<0)
	{
		flag[0] = -1;
	}
	return flag;
}

int main()
{
	int n,k;
	cout<<"Enter the number of elements you want in an array"<<endl;
	cin>>n;
	int a[n];
	//function for filling/accepting values into array
	insertIntoArray(a,n);
	cout<<"Enter the number that you are looking for in the array"<<endl;
	cin>>k;
	int* flag = linearSearch(a,n,k);//function for linear search which searches for an elements index position/element linearly which you are looking for
	if(flag[0] >=0)
	{
		cout<<"the number "<<k<<" is present at index "<<flag[0];
	}
	else
	{
		cout<<flag[0]<<endl;
		cout<<"the number "<<k<<" is not present in the array";
	}

