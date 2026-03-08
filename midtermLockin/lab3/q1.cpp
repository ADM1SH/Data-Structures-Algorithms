#include <iostream>
using namespace std;

class CharStack {
private:
    char stack[5]; // Changed to char
    int topstack;

public:
    CharStack() { topstack = -1; }

    int full() { return (topstack == 4); }
    int empty() { return (topstack == -1); }

    void push(char c) { // Accepts char
        if (!full()) {
            topstack++;
            stack[topstack] = c;
        }
    }

    char pop() { // Returns char
        if (!empty()) {
            char c = stack[topstack];
            topstack--;
            return c;
        }
        return '\0'; // Return null char if empty
    }
};

int main() {
    CharStack s;
    char input;
    
    // 1. Get Input
    cout << "Key in five characters : ";
    for(int i=0; i<5; i++) {
        cin >> input;
        s.push(input);
    }

    // 2. Output Reverse (LIFO)
    cout << "The reverse order is" << endl;
    while(!s.empty()) {
        cout << s.pop() << " ";
    }
    cout << endl;

    return 0;
}