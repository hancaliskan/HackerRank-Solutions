#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    char natural_numbers[10][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    if (n == 0){cout << natural_numbers[n];}
    if (n == 1){cout << natural_numbers[n];}
    if (n == 2){cout << natural_numbers[n];}
    if (n == 3){cout << natural_numbers[n];}
    if (n == 4){cout << natural_numbers[n];}
    if (n == 5){cout << natural_numbers[n];}
    if (n == 6){cout << natural_numbers[n];}
    if (n == 7){cout << natural_numbers[n];}
    if (n == 8){cout << natural_numbers[n];}
    if (n == 9){cout << natural_numbers[n];}
    if (n > 9){cout << "Greater than 9";}
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

