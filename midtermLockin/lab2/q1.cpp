#include <iostream>
using namespace std;

struct employee{
    string name;
    float salary;
};

int main(){
    employee count;
    int i;

    cout << "Enter the number of employees: "; cin >> i;
    string n[i];
    float s[i];
    for(int x = 0; x < i; x++){
        cout << endl << "Employee " << x + 1 << endl;

        cout << "\t Enter name   : "; cin >> count.name;
        n[x] = count.name;

        cout << "\t Enter salary : "; cin >> count.salary;
        s[x] = count.salary;
    }

    return 0;
}