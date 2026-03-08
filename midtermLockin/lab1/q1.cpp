#include <iostream>
using namespace std;

int main() {
    int num[4], maxNum = 0;

    cout << "Enter four integers : ";
    for (int i = 0; i < 4; i++) {
        cin >> num[i];
        if (num[i] > maxNum) {maxNum = num[i];}
    }

    cout << "Maximum Number is: " << maxNum << endl;
    return 0;
}