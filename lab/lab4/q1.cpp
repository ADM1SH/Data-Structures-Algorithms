#include <iostream>
#include <cstdlib>
using namespace std;

struct Person{
    string name;
    int flavor;
};

class ADTQueue{
    private:
        Person queue[2];
        int front, back;
    public:
        ADTQueue(){
            front = 0;
            back = -1;
        }

    int full() {
                if(back != -1 && (back + 1) % 2 == front) {return 1;}
                if(back == 1) {return 1;}
                else {return 0;}
            }

    int empty() {
                if(back == -1) {return 1;}
                if(front > back) {return 1;}
                else {return 0;}
            }

    void append(Person pr){
            if(!full()){
                back++;
                queue[back] = pr;
            } else {cout << "queue is full. \n";}
        }

    serve(){
    Person serve(){
            Person pr;
            if(!empty()){
                pr = queue[front];
                front++;
                return pr;
            }else{
                cout<< "queue is empty \n";
                exit(0);
            }
        }
};

int main(){
    ADTQueue q;
    Person p;
    for(int i = 0; i < 2; i++){
        cout << "enter name: "; cin >> p.name;
        cout << "enter flavor: "; cin >> p.flavor;
        q.append(p);
    }

    while(!q.empty()){
        Person current = q.serve();
        cout << current.name << " ";
        
        if (current.flavor == 1) cout << "Sensitive and often daydreaming about past and future." << endl;
        else if (current.flavor == 2) cout << "Friendly, easygoing and has many friends." << endl;
        else if (current.flavor == 3) cout << "Affectionate, giving, loving and very understanding." << endl;
        else if (current.flavor == 4) cout << "Negotiator and will do anything to avoid open conflict." << endl;
        else cout << "Unknown personality." << endl;
    }
    return 0;
}