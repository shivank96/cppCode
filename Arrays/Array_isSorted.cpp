#include<iostream>
using namespace std;
int isSorted(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	int res;
	cout<<"Enter the number of elements you want in an array";
	cin>>n;
	
	int a[n];
	
	cout<<"Enter the elements you want in the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	res =isSorted(a,n);
	 
	if(res == 1)
	cout<<"array is sorted array";
    else
	cout<<"array is not sorted";
	
}

