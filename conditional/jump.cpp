#include<iostream>
using namespace std;
int main()
{
	int pocketMoney = 3000;
	for(int date=1;date<=30;date++) {
		if(date%2 == 0) {
			continue;
		}
		if(pocketMoney == 0) {
			break;
		}
		cout<<"Go out today!"<<" "<<date<<endl;
		pocketMoney = pocketMoney-300;
		cout<<pocketMoney<<endl;
	}
	return 0;
}