#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;

    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    Box Box1, Box2;

    Box1.length = 5.0;
    Box1.breadth = 6.0;
    Box1.height = 7.0;

    Box2.length = 10.0;
    Box2.breadth = 12.0;
    Box2.height = 13.0;

    cout << "Volume of Box 1: " << Box1.getVolume() << endl;
    cout << "Volume of Box 2: " << Box2.getVolume() << endl;

    return 0;
}