#include<bits/stdc++.h>
using namespace std;
/*
void fun(int &x)
{
	x = 20;
}

int main()
{
	int x = 10;
	fun(x);
	cout << "New Value of x is " << x;
	return 0;
}*/

/*
class Employee {
private:
	string name;
	string desig;

	// More attributes and operations
};

void printEmpDetails(Employee emp)
{
	cout<<emp.getName();
	cout << emp.getDesig();

	// Print more attributes
}*/

using namespace std;

class Pet {
public:
	virtual string getDescription() const
	{
		return "This is Pet class";
	}
};

class Dog : public Pet {
public:
	virtual string getDescription() const
	{
		return "This is Dog class";
	}
};

void describe(Pet p)
{
	cout << p.getDescription() << endl;
}

int main()
{
	Dog d;
	describe(d);
	return 0;
}