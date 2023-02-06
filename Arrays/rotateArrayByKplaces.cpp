#include<iostream>
using namespace std;
void insertIntoArray(int a[],int n)
{
	cout<<"Enter the elements you want in an array";
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
void rotateArrayByKPlaces(int a[],int n,int k)
{
	while(k>0)
	{
		int temp = a[0];
		int counter = 0;
		for(int i=0,j=i+1;i<n;i++,j++)
		{
			a[i]= a[j];
			counter+=1;
		}
		if(counter==n)
		{
			a[n-1]=temp;
			k=k-1;
			counter = 0;
		}
	}
}
int main()
{
	int n,k;
	cout<<"Enter the number of elements you want in an array";
	cin>>n;
	cout<<"Enter the value of k for number of index places rotation";
	cin>>k;
	int a[n];
	//function for filling/accepting values into array
	insertIntoArray(a,n);
	//function for rotating array by k places
	rotateArrayByKPlaces(a,n,k);
	cout<<"The values after "<<k<<" places are as follows "<<endl;
	displayToDebug(a,n);
}
