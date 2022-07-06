#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string input1, input2;
    cin >> input1 >> input2;
    cout << input1.size() << " " << input2.size() << "\n";
    cout << input1+input2 << "\n";
    char temp;
    temp = input1[0];
    input1[0] = input2[0]; input2[0] = temp;
    cout << input1+" "+input2;
    return 0;
}

