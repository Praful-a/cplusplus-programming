/*Set a variable without using Arithmetic, Relational
or Conditional Operator.*/

// Using arithmetic operators
/*#include<iostream>
using namespace std;

int calculate(int a, int b, int c) {
	return ((1 - c) * a) + (c * b);
}

int main() {
	int a = 5, b = 10, c = 0;
	int x = calculate(a, b, c);
	cout<< x <<endl;

	return 0;
}*/

// Without using arithmetic operators

#include<iostream>
using namespace std;
int calculate(int a, int b, int c) 
{
	int arr[] = {a, b};
	return *(arr + c);
}

int main() {
	int a = 5, b = 10, c = 1;
	int x = calculate(a, b, c);
	cout<< x <<endl;
	return 0;
}