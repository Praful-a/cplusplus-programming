/* For Loop */
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int sum = 0;
// 	for(int counter=0;counter<n;counter++) {
// 		sum=sum+counter;
// 	}
// 	cout<<"sum of n no. :"<<sum<<endl;
// 	return 0;
// }

/* while loop */
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	while(n>0) {
// 		cout<<"Enter a number: ";
// 		cin>>n;
// 		cout<<"You have entered : "<<n<<endl;
// 	}
// 	cout<<"You exit! "<<endl;
// 	return 0;
// }

/* do while loop */
#include<iostream>
using namespace std;
int main()
{
	int n;
	do {
		cin>>n;
		cout<<n<<endl;
	}while(n>0);
	return 0;
}