#include<iostream>
using namespace std;
/*
class Test
{
	int value;
public:
	Test(int v = 0) { value = v; }
	int getValue() const { return value; }
};

int main()
{
	Test t(20);
	cout<<t.getValue();
	return 0;
}
*/
/*
class Test {
	int value;
public:
	Test(int v = 0) {value = v;}
	int getValue() { return value; }
};

int main()
{
	const Test t;
	cout<< t.getValue();
	return 0;
}*/

// Demonstration of constant object,
// show that constant object can only 
// call const member function
class Demo
{
	int value;
public:
	Demo(int v = 0) { value=v; }
	void showMessage()
	{
		cout<<"Hello World We are Tushar, "
		"ramswarup, Nilesh and Subhash Inside"
		" showMessage() Function"<<endl;
	}
	void display()const
	{
		cout<<"Hello world I'm Rancho "
		"Baba Inside display() Function"<<endl;
	}
};

int main()
{
	// Constant object are initialised at the time of declaration using constructor
	const Demo d1;
	// d1.showMessage(); Error occurred if uncomment.
	d1.display();
	return 0;
}