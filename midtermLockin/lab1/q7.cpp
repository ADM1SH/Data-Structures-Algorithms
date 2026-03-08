#include <iostream>
using namespace std;

struct employee {
    string first_name, last_name, emp_num;
    int age;
};

int main(){
    employee record;

    cout << "First name.     : "; cin >> record.first_name;
    cout << "Last name       : "; cin >> record.last_name;
    cout << "Employee number : "; cin >> record.emp_num;
    cout << "Age             : "; cin >> record.age;

    cout << endl << "Hello " << record.first_name << " " << record.last_name << endl;
    cout << "Your employee number " << record.emp_num << endl;
    cout << "You are " << record.age << " years old" << endl;

    return 0;
}