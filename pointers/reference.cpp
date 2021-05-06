#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
	int x = 10;

	// ref is a reference to x.
	int &ref = x;

	// Value of x is now changed to 20
	ref = 20;
	cout << "x = " << x <<endl;

	// Value of x is now changed to 30
	x = 30;
	cout << "ref = " << ref <<endl;

	return 0;
}*/

// swap two numbers
/*
void swap (int &first, int &second)
{
	int temp;
	temp = first;
	first = second;
	second = temp;
}

int main()
{
	int a, b;
	cout<< "Enter two values: ";
	cin>>a >> b;
	swap(a, b);
	cout<< a << " " << b;
	return 0;

}*/

// Avoiding a copy of large structures
/*
struct Student {
	string name;
	string address;
	int rollNo;
};

// If we remove & in blow function, a new
// copy of the student object is created.
// We use const to avoid accidental updates
// in the function as the purpose of the function
// is to print s only.
void print(const Student &s)
{
	cout<< s.name << " " << s.address << " " << s.rollNo;
}

int main()
{
	struct Student s;
	s.name = "Rahul";
	s.address = "A-45, Banglore";
	s.rollNo = 1225;
	print(s);
	return 0;
}*/

// For Each example
/*
int main()
{
	vector<int> vect{10, 20, 30, 40};

	// We can modify elements if we
	// use reference
	for(int &x : vect)
		x = x + 5;

	// Printing elements
	for(int x : vect)
		cout<< x << " ";
	return 0;
}*/

// Use references in each loop to avoid a copy of 
// individual objects when objects are large.

int main()
{
	vector<string> vect{"geeksforgeeks practice",
						"geeksforgeeks write",
						"geeksforgeeks ide"};

	// We avoid copy of the whole string
	// object by using reference
	for(const auto &x : vect)
		cout<< x << endl;
	return 0;
}