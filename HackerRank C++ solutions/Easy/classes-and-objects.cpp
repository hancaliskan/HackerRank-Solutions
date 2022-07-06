#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student{
    int scores[5];
    int sum;
public:
    
    int calculateTotalScore();
    void input();
    
};
int Student::calculateTotalScore(){
    return sum;
}
void Student::input(){
    sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> scores[i];
        sum += scores[i];
    }
}

int main() {
