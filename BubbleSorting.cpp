#include<iostream>
using namespace std;

int main() {
    int array[4] = { 4, 9, 1, 3 };
  

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i-1; j++) {
            if (array[j] > array[j + 1]) {
                
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < 4; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
