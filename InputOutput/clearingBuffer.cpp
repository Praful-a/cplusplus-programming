// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// 	int a;
// 	char ch[80];
// 	cin >> a;

// 	cin.getline(ch, 80);
// 	cout<<a<<endl;
// 	cout<<ch<<endl;

// 	return 0;
// }

// #include<iostream>
// //for <streamsize>
// #include<ios>
// // for numeric_limits
// #include<limits>

// using namespace std;

// int main()
// {
// 	int a;
// 	char str[80];

// 	cin>>a;
// 	// discards the input buffer
// 	cin.ignore(numeric_limits<streamsize>::max(), '\n');

// 	cin.getline(str, 80);
// 	cout<<a<<endl;
// 	cout<<str<<endl;

// 	return 0;
// }


#include<iostream>
#include<ios>
#include<limits>
#include<vector>
using namespace std;

// int main()
// {
// 	int a;
// 	char str[80];
// 	cin>>a;
// 	cin.sync();
// 	cin.getline(str, 80);
// 	cout<<a<<endl;
// 	cout<<str<<endl;

// 	return 0;
// }


int main()
{
	int a;
	string s;
	// removing white spaces before the sting.(________geeks)
	cin>>ws;
	cin>>a;
	// Discards the input buffer and
	// intial white spaces of string
	cin>>ws;

	getline(cin, s);

	cout<<a<<endl;
	cout<<s<<endl;
	return 0;
}