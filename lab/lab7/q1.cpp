#include <iostream>
using namespace std;

int search(int a[], int size, int y);

int main(){
    int *ptr, size, searchVal, index;

    cout << "Enter array size: "; cin >> size;

    ptr = new int[size]; //creating the dynamic array
    for(int i = 0; i < size; i++){cout << "Enter element " << (i + 1) << ": "; cin >> ptr[i];}

    cout << "Enter a element to search: "; cin >> searchVal;
    index = search(ptr, size, searchVal);
    if(index == -1){cout << "Element not found " << endl;}
    else{cout << "Element found at index " << index << endl;}

    return 0;
}

int search(int a[], int size, int y){
    int first = 0, last = size - 1, middle;

    while(first <= last){
        middle = (first + last)/2;
        if(y == a[middle]){return middle;}
        else if(y > a[middle]){first = middle + 1;}
        else{last = middle - 1;}
    }
    return -1;
}
