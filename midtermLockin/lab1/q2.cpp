#include <iostream>
using namespace std;

int main(){
    int num;

    do{
        cout << "Type a number (0 to exit): "; cin >> num;
        if(num % 2 != 0){cout << num << " is odd." << endl;}
        else if (num != 0) {cout << num << " is even." << endl;}
    } while (num != 0);
    cout << "Thank you." << endl;

    return 0;
}