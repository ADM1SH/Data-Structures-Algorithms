#include <iostream>
using namespace std;

class BMI{
    private:
        float height, weight, float_bmi;
        string bmi_stat;
    public:
        BMI(float h, float w){
            height = h;
            weight = w;
        }

        void set(float, float){
            height = 1.0;
            weight = 1.0;
        }
        void calculate(){
            float_bmi = weight / (height * height);
            if(float_bmi < 18.5 ){bmi_stat = "Underweight";}
            else if(float_bmi < 25){bmi_stat = "Normal";}
            else if(float_bmi < 30){bmi_stat = "Overweight";}
            else{bmi_stat = "Obese";}
        }

        void display(){
            cout << "Your bmi is: " << float_bmi << endl;
            cout << "You are " << bmi_stat << endl;
        }
};

int main(){
    float h, w;

    cout << "Enter height (m)  : "; cin >> h;
    cout << "Enter weight (kg) : "; cin >> w;

    BMI b(h, w);
    b.calculate();
    b.display();

    return 0;
}