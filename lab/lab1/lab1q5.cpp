#include <iostream>
using namespace std;

int main() {
    int marks[5], sum = 0, i = 0;
    while (i < 5) {
        cout<< "Enter Mark: "; cin >> marks[i];
        sum += marks[i]; i++;
    }
    cout << "Mark average is: " << sum / 5.0 << endl;
    return 0;
}