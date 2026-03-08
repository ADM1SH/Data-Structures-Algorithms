#include <iostream>
using namespace std;

class ADTStack{
    private:
        char stack[5];
        int top;
    public:
        ADTStack(){top = -1;}

        int full(){
            if(top == 4){return 1;}
            else{return 0;}
        }

        int empty(){
            if(top == -1){return 1;}
            else{return 0;}
        }

        void push(char alpha){
            if(!full()){
                top++;
                stack[top] = alpha;
            } else{cout << "Stack is full. \n";}
        }

        char pop(){
            char alpha;
            if(!empty()){
                alpha = stack[top];
                top --;
                return alpha;
            } else{
                cout << "stack is empty \n";
                exit(0);
            }
        }
};

int main(){
    ADTStack st;
    char alphabet;

    cout << "Key in 5 Characters: ";
    for(int i=0; i < 5; i++){
        cin >> alphabet;
        st.push(alphabet);
    }
    cout <<"The reverse order is: \n";
    while (!st.empty()){
        cout << st.pop() << " ";
    }

    return 0;
}