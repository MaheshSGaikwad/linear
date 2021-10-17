//search the element in an array
#include<iostream>
using namespace std;
void linear(int array[],int size,int n)
{
	for(int i=0;i<size;i++)
	{
		if(array[i]==n)
		 cout<<"Element found at index "<<i;
	}
}
//Refactoring of the code is done
int main()
{
	int size,n;
	cout<<"Enter the size of an array:\n";
	cin>>size;
	int array[size];
	cout<<"Enter the array elements:\n";
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the no to be searched:\n";
	cin>>n;
	linear(array,size,n);
}
//pull example
