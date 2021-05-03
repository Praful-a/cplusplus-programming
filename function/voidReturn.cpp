// use of return in void function
#include<iostream>
using namespace std;
/*
void fun()
{
	cout<<"Hello";
	return;
}

int main()
{
	fun();
	return 0;
}*/

// A void fun() can return another void function
/*void work()
{
	cout<<"The void function has returned "
			"a void() !!! \n";
}

// Driver void() returning void work()
void test()
{
	// Returning void function
	return work();
}

int main()
{
	// Calling void function
	test();
	return 0;
}*/

// code to demonstrate void() returning a void value

// Driver void() returning a void value
void test()
{
	cout<< "Hello";
	// Returning a void value
	return (void)"Doesn't Print";
}
int main()
{
	test();
	return 0;
}