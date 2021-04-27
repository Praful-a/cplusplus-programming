// #include<iostream>
// int main() {

// 	int i = 1;
// 	printf("%d %d %d", i, ++i, i++);
// 	return 0;
// }

// All three printf() statements
// in this cause undefined behavior

#include<iostream>
int main() {
	volatile int a = 10;
	printf("\n %d %d", a, a++);

	a = 10;
	printf("\n %d %d", a++, a);

	a = 10;
	printf("\n %d %d %d", a, a++, ++a);
	return 0;
}