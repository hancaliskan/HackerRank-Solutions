#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    public:
        int st_age;
        int st_standard;
        string st_first_name;
        string st_last_name;
        void set_age(int age);
        void set_standard(int standard);
        void set_first_name(string first_name);
        void set_last_name(string last_name);
        int get_age();
        int get_standard();
        string get_first_name();
        string get_last_name();
        string to_string();
};

void Student::set_age(int age){
    st_age = age; 
}
void Student::set_standard(int standard){
    st_standard = standard;
}
void Student::set_first_name(string first_name){
    st_first_name = first_name;
}
void Student::set_last_name(string last_name){
    st_last_name = last_name;
}
int Student::get_age(){
    return st_age;
}
int Student::get_standard(){
    return st_standard;
}
string Student::get_first_name(){
    return st_first_name;
}
string Student::get_last_name(){
    return st_last_name;
}
string Student::to_string(){
    stringstream ss;
    char c = ',';
    ss << st_age << c << st_first_name << c << st_last_name << c << st_standard;
    return ss.str();  
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

