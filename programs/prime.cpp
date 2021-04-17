// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n, flag = 0;
// 	cin>>n;
// 	for (int i=2; i<n;i++) {
// 		if(n%i == 0) {
// 			flag = 1;
// 			break;
// 		}
// 	}
// 	if(flag == 1) {
// 		cout<<n<<" is not prime!"<<endl;
// 	} else {
// 		cout<<n<<" is a prime!"<<endl;
// 	}
	// return 0;
// }

/**********Another way *********/
#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0) {
			cout<<"Not Prime!"<<endl;
			break;
		}
	}
	if(i==n)
		cout<<"Prime"<<endl;
	return 0;
}