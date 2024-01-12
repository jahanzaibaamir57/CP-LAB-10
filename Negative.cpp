#include<iostream>
using namespace std;
int main() {
	int array[4][3] = { {1,2,3},{2,4,6},{3,5,-7},{-1,4,8} };
	int negative[2] = { 0 };
	int p = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			if (array[i][j] < 0) {
				if (p < 2) {
					for (int k = 0; k < 2; k++) {
						negative[p] = array[i][j];
					}
					p++;
				}
			}

		}
	}

	for (int i = 0; i < 2; i++) {
		cout << negative[i] << " ";
	}
	cout << "\n\n";

	return 0;
}
