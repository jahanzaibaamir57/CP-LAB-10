#include<iostream>
using namespace std;
int main() {
	int array[10];
	int positive = 0, negative = 0;
	cout << "Enter 10 values in the array: ";
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < 10; i++) {
		if (array[i] > 0) {
			positive++;
		}
		else
			negative++;
	}
	cout << "\n\nTotal number of positive values in the array:" << positive;
	cout << "\n\nTotal number of negative values in the array:" << negative;

	return 0;
}
