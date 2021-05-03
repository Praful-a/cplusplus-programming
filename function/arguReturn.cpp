#include<iostream>
#include<math.h>
using namespace std;
/*
void value(void);

int main() {
	value();
	return 0;
}

void value(void) {
	int year = 1, period = 5, amount = 5000, inrate = 0.12;
	float sum;
	sum = amount;
	while(year <= period) {
		sum = sum * (1 + inrate);
		year = year + 1;
	}
	printf("The Total amount is : %.2f", sum);
}*/

// function with arguments and no return type

/*
void function(int, int[], char[]);
int main()
{
	int a = 20;
	int ar[5] = {10, 20, 30, 40, 50};
	char str[30] = "geeksforgeeks";
	function(a, &ar[0], &str[0]);
	return 0;
}

void function(int a, int* ar, char* str)
{
	int i;
	cout<<"value of a is "<<a<<endl;
	for(i=0; i<5; i++) {
		cout<<"value of ar["<<i<<"]"<<" is "<<ar[i]<<endl;
	}
	cout<<"\nValue of str is "<<str;
}*/


// function with no arguments but have return type
/*int sum();
int main()
{
	int num;
	num = sum();
	cout<<"\nSum of two given value = "<< num;
	return 0;
}

int sum()
{
	int a = 50, b = 80, sum;
	sum = sqrt(a) + sqrt(b);
	return sum;
}*/

// function with arguments and with return value

int function(int, int[]);

int main()
{
	int i, a = 20;
	int arr[5] = {10, 20, 30, 40, 50};
	a = function(a, &arr[0]);
	cout<<"value of a is "<< a<<endl;
	for(i = 0; i<5; i++) {
		cout<<"value of arr["<<i<<"]"<<" is "<<arr[i]<<endl;
	}
	return 0;
}

int function(int a, int* arr)
{
	int i;
	a = a + 20;
	arr[0] = arr[0] + 50;
}