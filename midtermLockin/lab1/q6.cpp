#include <iostream>
using namespace std;

void sum(int arr[], int size){
    int total = 0;

    cout << "You have entered: ";
    for(int i = 0; i < size; i++){
        cout << arr[i];
        if(i < size - 1){cout << ", ";}
        total += arr[i];
    }

    cout << endl;
    cout << "Sum of the numbers entered is: " << total << endl;

}

int main(){
    const int SIZE = 5;
    int num[SIZE];

    cout << "Enter 5 numbers and the program will calculate the sum of the numbers." << endl;

    for (int i = 0; i < SIZE; i++){cout << "Enter numbers " << (i + 1) << ": "; cin >> num[i];}
    sum(num, SIZE);

    return 0;
}