// C++ program to show that local parameters hide
// class members
/*
#include<iostream>
using namespace std;
class Test {
	int a;

public:
	Test() {a = 1;}

	// Local parameter 'a' hides class member 'a'
	void func(int a)  
	{
		cout << a;
	}
};

int main() {
	Test obj;
	int k = 3;
	obj.func(k);
	return 0;
}*/


// using this pointer
/*#include<iostream>
using namespace std;
class Test {
	int a;
public:
	Test() { a = 1; }

	// Local parameter 'a' hides object's member
	// 'a', but we can access it using this.
	void func(int a)
	{
		cout<< this->a;
	}
};

int main() {
	Test obj;
	int k = 3;
	obj.func(k);
	return 0;
}*/

// c++ program to show that :: can be used to access static
// members when there is a local variable with same name
#include<iostream>
using namespace std;

class Test
{
	static int a;  // a is static now
public:
	void func(int a)
	{
		cout << Test::a;
	}
};

// In C++, static members must be explicitly defined
// like this
int Test::a = 1;

// Driver code
int main()
{
	Test obj;
	int k = 3;
	obj.func(k);
	return 0;
}