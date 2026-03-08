#include <iostream>
using namespace std;

int main(){
    int num[2], total;
    char op;

    cout << "Enter an operator (+, -, *, /): "; cin >> op;
    cout << "Enter 2 operands: ";
    for (int i = 0; i < 2; i++) {
        cin >> num[i];
    }

    switch(op){
        case '+':
            total = num[0] + num[1];
            break;
        case '-':
            total = num[0] - num[1];
            break;
        case '*':
            total = num[0] * num[1];
            break;
        case '/':
            if(num[1] != 0)
                total = num[0] / num[1];
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << num[0] << op << num[1] << " = " << total << endl;
    return 0;
}