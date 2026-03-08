#include <iostream>
using namespace std;

// Function prototype
void add(int &v1, int v2); // [cite: 98]

int main() {
    // Variable and array declarations
    int array[] = {10, 20, 30, 40}; // [cite: 102]
    int *x, *y;                     // [cite: 103]
    int a = 2, b = 4;               // [cite: 104]

    // Pointer assignment
    x = array;                      // [cite: 105, 106]

    // Calculate b: *(x+3) is 40, (*x+2) is 12
    b = *(x + 3) + (*x + 2);        // [cite: 107]
    cout << "b = " << b << endl;    // [cite: 108]

    // Assign address of b to pointer y
    y = &b;                         // [cite: 109]

    // Modify array[0] via pointer x
    *x = *y + 4;                    // [cite: 110]
    cout << array[0] << endl;       // [cite: 111]

    // Reference variable c refers to a
    int &c = a;                     // [cite: 112]

    // Calculate c (modifies a because c is a reference)
    // Note: PDF wrote 'C', corrected to 'c'
    c = x[1] + *y;                  // [cite: 113]
    cout << "a= " << a << endl;     // [cite: 114]

    // Function call
    add(c, array[2]);               // [cite: 115]
    cout << "c = " << c << endl;    // [cite: 116]

    // Print array element at index 2
    cout << *(x + 2) << endl;       // [cite: 117]

    return 0;
}

// Function definition
void add(int &v1, int v2) {         // [cite: 119]
    v1 = v1 + 2;                    // [cite: 120]
    v2 = v2 + 2;                    // [cite: 120]
}