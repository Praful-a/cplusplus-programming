#include<iostream>
/*
#define LIMIT 5
int main()
{
	for (int i = 0; i < LIMIT; i++) {
		std::cout<<i<<"\n";
	}
	return 0;
}		*/


/********** macro with parameter *********/
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;
	area = AREA(l1, l2);
	std::cout << "Area of rectangle is: " << area;
	return 0;
}