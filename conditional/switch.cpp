#include<iostream>
using namespace std;
// int main()
// {
// 	char button;
// 	cout<<"Input a character: ";
// 	cin>>button;

// 	if(button=='a')
// 	{
// 		cout<<"Hello"<<endl;
// 	}
// 	else if (button == 'b')
// 	{
// 		cout<<"Namaste"<<endl;
// 	}
// 	else if (button == 'c')
// 	{
// 		cout<<"Salut"<<endl;
// 	}
// 	else if (button == 'd')
// 	{
// 		cout<<"Hola"<<endl;
// 	}
// 	else 
// 	{
// 		cout<<"I am still learning more"<<endl;
// 	}
// 	return 0;
// }



/************* Using Switch *************/
int main()
{
	char button;
	cout<<"Input a character : ";
	cin>>button;
	switch(button) {
		case 'a':
			cout<<"Hello"<<endl;
		break;
		case 'b':
			cout<<"Namaste"<<endl;
		break;
		case 'c':
			cout<<"Hola"<<endl;
		break;
		case 'd':
			cout<<"ciao"<<endl;
		break;
		default:
			cout<<"I am learning more!"<<endl;
		break;
	}
	return 0;
}