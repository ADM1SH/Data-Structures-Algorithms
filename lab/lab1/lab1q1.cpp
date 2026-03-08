#include <iostream>
using namespace std;

int main() {
    int num[4], maxNum = 0;

    for (int i = 0; i < 4; i++) {
        cout << "Please enter number " << i + 1 << " : "; cin >> num[i];

        if (num[i] > maxNum) {maxNum = num[i];}
    }

    cout << "Maximum Number is: " << maxNum << "\n";
    return 0;
}