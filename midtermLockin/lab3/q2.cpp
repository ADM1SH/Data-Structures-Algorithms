#include <iostream>
using namespace std;

class IntStack {
private:
    int stack[10]; // Size 10
    int topstack;

public:
    IntStack() { topstack = -1; }
    int empty() { return topstack == -1; }
    int full() { return topstack == 9; } // Size is 10, max index 9

    void push(int num) {
        if (!full()) stack[++topstack] = num;
    }

    int pop() {
        if (!empty()) return stack[topstack--];
        return 0;
    }
};

int main() {
    IntStack s;
    int num, oddCount = 0, evenCount = 0;

    // 1. Input
    cout << "Key in 10 numbers : ";
    for(int i=0; i<10; i++) {
        cin >> num;
        s.push(num);
    }

    // 2. Process (Pop and Count)
    cout << "Numbers entered are : ";
    for(int i=0; i<10; i++) {
        int val = s.pop();
        cout << val << " ";
        
        // Check Even/Odd
        if (val % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << endl;

    cout << "There are " << evenCount << " even numbers and " << oddCount << " odd numbers." << endl;
    return 0;
}