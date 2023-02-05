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
void sortArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	    }
	}
}
void removeDuplicates(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=0;
			}
		}
	}
}
void properZeroShiftOnSort(int a[],int n)
{
	int counter;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			counter =1;
		for(int j=i+1;j<n;j++)
		{
		if(a[j]!=0 && counter<2)
		{
			int temp;
			temp = a[i];
			a[i]=a[j];
			a[j]= temp;
			counter+=1;
		}
	    }
	    }
	}
}
void diplayToDebug(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements you want in an array";
	cin>>n;
	int a[n];
	//function for filling/accepting values into array
	insertIntoArray(a,n);
	//function for sorting values of an array
	sortArray(a,n);
	//values before removing duplicates
	cout<<"sorted elements in an array before removing duplicates"<<endl;
	diplayToDebug(a,n);
	//removing duplicates from sorted array
	removeDuplicates(a,n);
	//values after removing duplicates
	cout<<"sorted elements in an array after removing duplicates and unproper shift "<<endl;
	diplayToDebug(a,n);
	//Proper shifting of zeros at the end of array
	properZeroShiftOnSort(a,n);
	//values after proper shifting of zeros
	cout<<"sorted elements in an array after removing duplicates and proper shift"<<endl;
	diplayToDebug(a,n);
}
