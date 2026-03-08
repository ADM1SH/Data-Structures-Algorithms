#include <iostream>
using namespace std;

int main(){
    int num;
    do {
        cout << "Type a number (0 to exit): "; cin >> num;
        if (num == 0) {
            cout << "Thank you." << endl;
        } else if (num % 2 == 0) {
            cout << num << " is even." << endl;
        } else {
            cout << num << " is odd." << endl;
        }
    } while (num != 0);

    return 0;
}