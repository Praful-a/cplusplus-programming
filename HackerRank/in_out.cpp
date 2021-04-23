// #include<iostream>
// using namespace std;
// int main() {
// 	int i=0, num, sum = 0;
// 	while(i<3) {
// 		cin>>num;
// 		sum = sum + num;
// 		i++;
// 	}
// 	cout<<sum<<endl;
// 	return 0;
// }

#include <iostream>

using namespace std;
int main(){ 
int a;  
int sum =0, i=0; 
point: 
if(i<3){
	std::cin>> a; 
	sum = sum + a; 
	i++;
	goto point; 
} 
std::cout << sum; 
return 0; 
} 