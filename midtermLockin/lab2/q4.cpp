#include <iostream>
using namespace std;

void modifyValues(int &ref, int val) {
    ref = ref + 5;
    val = val + 5;
}

int main() {
    int value1, value2;

    cout << "Enter value 1 : "; cin >> value1;
    cout << "Enter value 2 : "; cin >> value2;

    modifyValues(value1, value2);

    cout << "The effect of passing value1 by reference is : " << value1 << endl;
    cout << "The effect of passing value2 by value is : " << value2 << endl;

    return 0;
}
