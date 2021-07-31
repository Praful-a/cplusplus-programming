#include<bits/stdc++.h>
using namespace std;

/*template <typename T>
T square(T x) {
	return x*x;
}

int main() {
	cout << square(5) << endl;
	cout << square(5.5) << endl;
	return 0;
}*/

template<typename T>
class BoVector {
	T arr[10000];
	int size;
public:
	BoVector(): size(0) {}
	void push(T x) { arr[size] = x; size++; }
	void print() const {for(int i=0; i<size; i++) {cout<< arr[i] << endl;}}
};

int main() {
	BoVector<int> bv;
	bv.push(2);
	bv.push(5);
	bv.push(8);
	bv.push(9);
	bv.print();
	return 0;
}