#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int labels_index;
      for (int i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2;
        cout << labels[labels_index];
        cout << "\n";
    }

    return 0;
}

