#include <iostream>
using namespace std;

class ADTStack{
    private:
        int stack[10];
        int top;
    public:
        ADTStack(){top = -1;}

        int full(){
            if(top == 9){return 1;}
            else{return 0;}
        }

        int empty(){
            if(top == -1){return 1;}
            else{return 0;}
        }

        void push(int number){
            if(!full()){
                top++;
                stack[top] = number;
            } else{cout << "Stack is full. \n";}
        }

        int pop(){
            int number;
            if(!empty()){
                number = stack[top];
                top--;
                return number;
            } else{
                cout << "stack is empty \n";
                exit(0);
            }
        }
};

int main(){
    ADTStack st;
    int num;
    int oddCount = 0;
    int evenCount = 0;

    cout << "Key in 10 numbers : ";
    for(int i=0; i < 10; i++){
        cin >> num;
        st.push(num);
    }

    cout << "Numbers entered are: ";
    while (!st.empty()){
        int val = st.pop();
        cout << val << " ";

        if(val % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << endl;

    cout << "There are " << evenCount << " even numbers and " << oddCount << " odd numbers." << endl;

    return 0;
}