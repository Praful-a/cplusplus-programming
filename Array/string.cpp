// C++ program to demonstrate array of strings using
//2D character array
#include<iostream>
#include<vector>
#include<array>
#include<string>
using namespace std;
/*
int main()
{
	// Initialize array of pointer
	const char *colour[4] = {"Blue", "Red", "Orange", "Yellow"};

	// Printing Strings stored in 2D array
	for(int i=0; i<4; i++)
		std::cout<<colour[i]<<"\n";
	return 0;	
}*/
/*
int main()
{
	// Initialize 2D Array
	char colour[4][10] = {"Blue", "Red", "Orange", "Yellow"};

	// Printing Strings stored in 2D Array
	for(int i = 0; i<4; i++)
		cout<<colour[i]<<"\n";
	return 0;
}*/

/*The STL string class may be used to create an array of mutable
strings. In this method, the size of the strings is not fixed, 
and the strings can be changed.*/
/*int main()
{
	// Initialize String Array
	string colour[4] = {"Blue", "Red", "Orange",
							"Yellow"};
	// Print Strings
	for(int i=0; i<4; i++)
		cout << colour[i] << "\n";
	return 0;
}*/

/*The STL container Vector can be used to dynamically
allocate an array that can vary in size.*/

int main()
{
	// Declaring Vector of String type
	// Values can be added here using initializer list syntax
	std::vector<std::string> colour = {"Blue", "Red", "Orange", "Black", "Green"};

	// Strings can be added at any time with push_back
	colour.push_back("Yellow");

	// Print Strings stored in Vector
	for(int i=0; i<colour.size(); i++)
		cout<<colour[i]<<"\n";
	return 0;
}

/*The STL container array can be use to allocate a fixed-size array.
It may be used very similarly to vector, but the size is always
fixed.*/
/*
int main()
{
	// Initialize array
	array<string, 4> colour {"Blue", "Red", "Orange", "Yellow"};

	// Printing Strings stored in array
	for(int i = 0; i<4; i++)
		cout<<colour[i] << "\n";
	return 0;
}*/