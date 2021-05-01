#include<iostream>
using namespace std;
/*
int max(int x, int y)
{
	if(x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10, b = 20;
	int m = max(a, b);

	cout<<"m is " << m;
	return 0;
}*/

// Call by value method

/*void fun(int x) {
	x = 30;
}

int main() {
	int x = 20;
	fun(x);
	cout << "x = " << x;
	return 0;
}*/

// Call by reference method
void fun(int *ptr)
{
	*ptr = 30;
}

int main() {
	int x = 20;
	fun(&x);
	cout << "x = " << x;
	return 0;
}