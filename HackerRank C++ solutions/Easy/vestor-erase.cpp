#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int add_member_number, a; 
    vector<int> v1;
    cin >> add_member_number;
    
    for (int i = 0; i < add_member_number; i++) {
        cin >> a;
        v1.push_back(a);
    }
    
    int delete_one,start,finish;
    cin >>  delete_one ;
    v1.erase(v1.begin()+delete_one-1);
    cin >>  start >>  finish ;
    v1.erase(v1.begin()+start-1,v1.begin()+finish-1);

    cout << v1.size() << endl;
    
    /* display vector values */
    for (int i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";

    
    return 0;
}

