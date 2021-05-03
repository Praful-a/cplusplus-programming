#include<iostream>
using namespace std;
/*inline int cube(int s)
{
	return s*s*s;
}

int main()
{
	cout<<"The cube of 3 is: "<<cube(3)<<"\n";
	return 0;
}*/

// Inline function in class
class Operation
{
	int a, b, add, sub, mul;
	float div;
public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void Operation :: get()
{
	cout<<"Enter first value:";
	cin>>a;
	cout<<"Enter second value:";
	cin>>b;
}

inline void Operation :: sum()
{
	add = a+b;
	cout<<"Addition of two numbers: "<< a+b<<"\n";
}

inline void Operation :: difference()
{
	sub = a-b;
	cout<<"Differece of two numbers: "<<a-b<<"\n";
}

inline void Operation :: product()
{
	mul = a*b;
	cout<<"Product of two numbers: "<<a*b<<"\n";
}

inline void Operation :: division()
{
	div=a/b;
	cout<<"Division of two numbers: "<<a/b<<"\n";
}

int main()
{
	cout<<"Program using inline function\n";
	Operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}