#include<iostream>
#include<cstring>
using namespace std;
// int main()
// {
// 	string str;
// 	int t = 4;
// 	while(t--)
// 	{
// 		//Read a line from standard input in str
// 		getline(cin, str);
// 		cout << str << " : newline" << endl;
// 	}
// 	return 0;
// }


// int main()
// {
// 	string str;
// 	int t = 4;
// 	while(t--)
// 	{
// 		getline(cin, str);

// 		// Keep reading a new line while there is
// 		// a blank line
// 		while(str.length() == 0)
// 			getline(cin, str);

// 		cout<<str<<" : newline" <<endl;
// 	}
// 	return 0;
// }


/**************** Taking unusual input ***************/
int main()
{
	int input;
	int count = 0;
	cout<<"To stop enter any character";
	cout << "\nEnter Your Input::";
	// cin returns false when a character
	// is entered
	while(cin >> input)
		count++;
	cout << "\ntotal number of inputs entered: "<<count;
	return 0;
}