#include<iostream>
using namespace std;

int maxint(int(&array)[10], int size);

int main() {
	int array[10];
	cout << "Enter 10 integers:";
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	int a = maxint(array, 10);
	cout << "The index for the largest value is " << a;
	cout << "\nThe value of maximun integer is:";
		cout << array[a];


}

int maxint(int(&array)[10], int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] > array[max]) {
			max = i;
		}
	}
	return max;
}
