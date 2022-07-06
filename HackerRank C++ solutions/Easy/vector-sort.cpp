#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int n_elements, a;
    cin >> n_elements;
    for (int i = 0; i < n_elements; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end()); 

    for (int i = 0; i < n_elements ; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}

