#include <iostream>
using namespace std;

int hashFunc(int value) {
    return value / 100;
}

int main(){
    int key[5], index[5];
    for(int i = 0; i < 5; i++){
        cout << "Enter Key " << i + 1 << ": "; cin >> key[i];
        while(key[i] < 1000 || key[i] > 9999){
            cout << "Input out of range." << endl;
            cout << "Enter Key " << i + 1 << ": "; cin >> key[i];
        }

        index[i] = hashFunc(key[i]);
    }

    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << "Key " << key[i] << "\tHash index: " << index[i] << endl;
    }

    return 0;
}


