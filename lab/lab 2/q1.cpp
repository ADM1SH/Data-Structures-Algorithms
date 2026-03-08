#include <iostream>
                        using namespace std;

struct employee {
    string name;
    float salary;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    employee* employees = new employee[n];

    for (int i = 0; i < n; i++) {
        cout << "Employee " << (i + 1) << endl;
        cout << "Enter name: ";
        cin >> employees[i].name;
        cout << "Enter salary: ";
        cin >> employees[i].salary;
    }

    delete[] employees;

    return 0;
}
