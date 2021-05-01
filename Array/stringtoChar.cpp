// CPP program to convert string 
// to char array
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

/*int main()
{
	// assigning value to string s
	string s = "geeksforgeeks";
	int n = s.length();

	// declaring character array
	char char_array[n+1];

	// copying the contents fo the string to char array
	strcpy(char_array, s.c_str());
	for(int i=0; i<n;i++)
		cout<<char_array[i];

	return 0;
}*/

// CPP program to convert string
// to char array
/*#include<iostream>
#include<string>
using namespace std;

int main()
{
	// assigning value to string s
	string s("geeksforgeeks");
	// declaring character array : {
	char p[s.length()];

	int i;
	for(i=0;i<sizeof(p); i++) {
		p[i] = s[i];
		cout<<p[i];
	}
	return 0;
}*/

int main()
{
	char* char_arr;
	string str_obj("GeeksForGeeks");
	char_arr = &str_obj[0];
	cout << char_arr;
	return 0;
}