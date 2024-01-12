#include<iostream>
#include<string>
using namespace std;


void swapChars(string& str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}


void permute(string& str, int start, int end) {
    if (start == end) {
        cout << str << endl;
        return;
    }

  
    for (int i = start; i <= end; i++) {
   
        swapChars(str, start, i);
        permute(str, start + 1, end);
        swapChars(str, start, i);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
   getline(cin,input);

    int n = input.length();

    
    cout << "All permutations of the string:" << endl;
    permute(input, 0, n - 1);

    return 0;
}
