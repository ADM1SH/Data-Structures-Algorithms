#include <iostream>
using namespace std;

int hashFunc (int first, int second, int third){
    return (first + second + third) % 100;
}

int main(){
    int id;

    cout << "Enter id: "; cin >> id;

    int thirdPart = id % 1000;
    int temp = id / 1000;

    int secondPart = temp % 1000;
    int firstPart = temp / 1000;

    int val = hashFunc(firstPart, secondPart, thirdPart);

    cout << "Hash Value = " << val << endl;

    return 0;
}

