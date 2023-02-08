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
int* intersection(int a[],int b[],int n,int m)
{
	int r=n+m;
	static int c[sizeof(r)];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		if(a[i]==b[j])
		{
			if(n>m)
			{
			c[i]=a[i];
			}
			else
			c[i]=b[j];
		}
	    }
	}
	return c;
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


int main()
{
	int n,m,k,r,count=0;
	cout<<"Enter the number of elements you want in first array"<<endl;
	cin>>n;
	int a[n];
	//function for filling/accepting values into array
	insertIntoArray(a,n);
	cout<<"Enter the number of elements you want in second array"<<endl;
	cin>>m;
	int b[m];
	//function for filling/accepting values into array
	insertIntoArray(b,m);
	cout<<"first array"<<endl;
	displayToDebug(a,n);
    cout<<"second array"<<endl;
	displayToDebug(b,m);
	r=n+m;
	int c[r];
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
		count++;
	}
	for(int i=0,j=count;i<m;i++,j++)
	{
		c[j]=b[i];
	}
	cout<<"result before sort and union"<<endl;
	displayToDebug(c,r);
	sortArray(c,r);
	cout<<"result after sort "<<endl;
	displayToDebug(c,r);
	removeDuplicates(c,r);
	properZeroShiftOnSort(c,r);
	cout<<"result after sort and union"<<endl;
	displayToDebug(c,r);
	int* inarr=intersection(a,b,n,m);
	cout<<"result after intersection"<<endl;
	displayToDebug(inarr,r);
 }
