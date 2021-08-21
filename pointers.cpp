#include <iostream>

using namespace std;
void test(int*, int*);
int main() {
	int a = 5, b = 5;
	cout << "Before changing:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	test(&a, &b);

	cout << "\nAfter changing" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

void test(int* n1, int* n2) {
	*n1 = 10;
	*n2 = 11;
}