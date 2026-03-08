#include <iostream>
using namespace std;

int main(){
    int marks[5], sum = 0, i = 0, avg;

    while(i < 5){
        cout << "Enter mark: "; cin >> marks[i];
        i++;
    }

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    int average = (int)sum / 5;
    cout << "Mark average is: " << average << endl;

    return 0;
}