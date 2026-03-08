#include <iostream>
using namespace std;

class box{
    public:
        float length, breadth, height;
        box(float l, float b, float h){
            length = l;
            breadth = b;
            height = h;
        }

        float volume(){ return length * breadth * height;}

        void display(int boxNo){
            cout << "Volume of box " << boxNo << ": " << volume() << endl;
        }

};

int main(){
    box b1(5.0, 6.0, 7.0);
    box b2(10.0, 12.0, 13.0);

    b1.display(1);
    b2.display(2);

    return 0;
}