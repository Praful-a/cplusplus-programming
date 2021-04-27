#include<iostream>
#include<typeinfo>
using namespace std;
/*
class student
{
private:
	int roll;
public:
	// constructor
	student(int r):roll(r) {}

	// A const function that changes roll with the help 
	// of const_cast
	void fun() const
	{
		( const_cast <student*> (this))->roll = 5;
	}
	int getRoll()
	{
		return roll;
	}
};

int main(void)
{
	student s(3);
	cout<<"Old roll number: " << s.getRoll() <<endl;
	s.fun();
	cout<<"New roll number: " << s.getRoll() <<endl;

	return 0;
}*/

// const_cast function example
/*int fun(int* ptr)
{
	return (*ptr + 10);
}

int main(void)
{
	const int val = 10;
	const int *ptr = &val;
	int *ptr1 = const_cast <int *>(ptr);
	cout << fun(ptr1);
	return 0;

}*/

/*int fun(int *ptr)
{
	*ptr = *ptr + 10;
	return (*ptr);
}

int main(void)
{
	return 0; int val = 10;
	const int *ptr = &val;
	int *ptr1 = const_cast <int *>(ptr);
	fun(ptr1);
	cout << val;
	return 0;
}*/
/*
int main(void)
{
	int a1 = 40;
	const int* b1 = &a1;
	char* c1 = const_cast <char *> (b1); //compiler error
	*c1 = 'A';
	return 0;
}*/


int main(void)
{
	int a1 = 40;
	const volatile int* b1 = &a1;
	cout << "typeid of b1 " << typeid(b1).name() << "\n";
	int* c1 = const_cast <int *> (b1);
	cout<<"typeid of c1 " << typeid(c1).name() <<"\n";
	return 0;
}