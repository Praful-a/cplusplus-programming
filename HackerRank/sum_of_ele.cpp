#include<iostream>
using namespace std;
int main()
{
	int i, sum=0, arr[5];
	int size, *ptr;
	cin>>size;
	ptr = (int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	for(i=0;i<size;i++)
	{
		sum += ptr[i];
	}
	cout<<sum<<endl;
	return 0;
}