#include<iostream>
using namespace std;
/*
int main() {
	int arr[5];
	arr[0] = 5;
	arr[2] = -10;

	// this is same as arr[1] = 2
	arr[3 / 2] = 2;
	arr[3] = arr[0];

	cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
	<<arr[3];

	return 0;
}*/
/*
int main()
{
	int arr[2];
	cout<<arr[3] << " ";
	cout << arr[-2] << " ";

	return 0;
}*/


/*Program to demonstrate that array elements 
are stored contiguous locations*/

int main()
{
	// an array of 10 integers.
	// If arr[0] is stored at
	// address x, then arr[1] is
	// stored at x + sizeof(int)
	// arr[2] is stored at x + 
	// sizeof(int) + sizeof(int)
	// and so on.
	int arr[5], i;
	cout<<"Size of integer in this compiler is "<<sizeof(int) << "\n";
	for(i=0; i<5; i++)
		// The use of '&' before a vriable name, yields
		// address of variable.
		cout<<"Address are[" << i << "] is " << &arr[i] << "\n";
	return 0;
}