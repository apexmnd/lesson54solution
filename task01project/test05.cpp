#include <iostream>
using namespace std;

long long factorial(int num) {
	// base-case	
	if (num == 0 or num == 1) {
		return 1;
	}
	// recursion-case


	return factorial(--num) * num;
}

int main() {
	int num;

	cout << "Input your positive number: ";
	cin >> num;

	long long result = factorial(num);

	cout << num << "! = " << result << endl;

	return 0;
}