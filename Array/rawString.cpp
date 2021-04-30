#include<iostream>
using namespace std;

int main()
{
	// A Normal String
	string str1 = "Geeks.\nFor.\nGeeks.\n";
	// A Raw String
	string str2 = R"(Geeks.\nFor.\nGeeks.\n)";

	cout<<str1<<endl;
	cout<<str2<<endl;
	return 0;
}