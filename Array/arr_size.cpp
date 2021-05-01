#include<bits/stdc++.h>
using namespace std;
/*
// User defined sizeof macro
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = my_sizeof(arr)/my_sizeof(arr[0]);
	cout<<"Number of elements in arr[] is "<<size;

	return 0;
}*/

// c++ program to find size of an array by using a 
// pointer hack.

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = *(&arr + 1) - arr;
	cout<< "Number of elements in arr[] is "<<size;
	return 0;
}

