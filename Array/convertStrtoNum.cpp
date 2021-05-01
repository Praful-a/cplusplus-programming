// C++ code to demonstrate working of lexical_cast()
#include<iostream>
// #include <boost/lexical_cast.hpp>
#include<sstream>
#include<string> // for string
using namespace std;
/*
int main()
{
	string str = "5";
	string str1 = "6.5";

	// Initializing f_value with casted float
	// f_value is 6.5
	float f_value = boost::lexical_cast<float>(str1);

	// Initializing i_value with casted int
	// i_value is 5
	int i_value = boost::lexical_cast<int>(str);

	// Displaying casted values
	cout<<"The float value after casting is : ";
	cout<<f_value<<endl;
	cout<<"The int value after casting is : ";
	cout<<i_value<<endl;

	return 0;	
}*/

// c++ code to demonstrate string stream method
// to convert number to string.
/*
int main()
{
	int num = 2016;
	// declaring output string stream
	ostringstream str1;

	// Sending a number as a stream into output
	// string
	str1 << num;

	// the str() converts number into string
	string geek = str1.str();

	// Displaying the string
	cout << "the newly formed string from number is : ";
	cout << geek << endl;
	return 0;
} */


// to_string() method to convert num to string.
/*int main()
{
	// Declaring integer
	int i_val = 20;

	// Declaring float
	float f_val = 30.50;

	// Conversion of int into string using
	// to_string()
	string stri = to_string(i_val);

	// Conversion of float into string using 
	// to_strint()
	string_strf = to_string(f_val);

	// Displaying the converted strings
	cout<<"The integer in string is : ";
	cout<< stri << endl;
	cout<< "The float in string is : ";
	cout<<strf <<endl;
	return 0;
} */

int main()
{
	// Declaring float
	float f_val = 10.5;

	// Declaring int
	int i_val = 17;

	// lexical_cast() converts a float into string
	string strf = boost::lexical_cast<string>(f_val);

	// lexical_cast() converts a int into string
	string stri = boost::lexical_cast<string>(i_val);

	// Displaying string converted numbers
	cout<<"The float value in string is : ";
	cout<<strf<<endl;
	cout<<"The int value in string is : ";
	cout<<stri<<endl;
	return 0;
}