#include<iostream>
using namespace std;

int main() {
	int a;
	float b;
	long c;
	char d;
	double e;
	scanf("%d %ld %c %f %lf", &a, &c, &d, &b, &e);
	printf("%d\n", a);
	printf("%.9ld\n", c);
	printf("%c\n", d);
	printf("%.2f\n", b);
	printf("%.5lf\n", e);
	
	return 0;
}