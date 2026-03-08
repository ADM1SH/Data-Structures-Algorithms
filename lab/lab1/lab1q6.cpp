#include <iostream>
using namespace std;

void Sum(int arr[], int size) {
    int sum = 0;
    cout << "You have entered : ";
    for (int i = 0; i < size; i++){
        sum += arr[i];
        cout << arr[i] << (i < size - 1 ? ", " : "");
    }
    cout << endl << "Sum of the numbers entered is : " << sum << endl;
}

int main() {
    int num[5], i = 0;
    cout << "Enter five numbers and the program will calculate sum of the numbers." << endl;
    while (i < 5){cout << "Enter number " << i + 1 << ": "; cin >> num[i], i++;}

    Sum(num, 5);
    return 0;
}