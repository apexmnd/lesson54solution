#include <iostream>
using namespace std;

int fibonachi(int index) {
	if (index <= 2) {
		return index - 1;
	}

	return fibonachi(index - 1) + fibonachi(index - 2);
}

int main() {
	int num;

	cout << "Input your positive number: ";
	cin >> num;

	int result = fibonachi(num);

	cout << "Result: " << result << endl;

	return 0;
}