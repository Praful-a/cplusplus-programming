#include<bits/stdc++.h>
using namespace std;
class Geeks
{
	// Access specifier
	public:
	//Data members
	string geekname;
	// Member functions()
	void printname()
	{
		cout<<"Geekname is: " << geekname;
	}	
};

int main()
{
	// Declare an object of class geeks
	Geeks obj1;
	// accessing data member
	obj1.geekname = "Abhi";

	// accessing member function
	obj1.printname();
	return 0;
}