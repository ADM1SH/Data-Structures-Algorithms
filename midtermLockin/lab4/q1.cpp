#include <iostream>
using namespace std;

// 1. Define the Person Structure
struct Person {
    char name[50];
    int flavor;
};

// 2. Define the ADTqueue Class (Modified for Person)
class ADTqueue {
private:
    Person queue[10]; // Array now holds 'Person' objects
    int head, tail;

public:
    ADTqueue() {
        tail = -1;
        head = 0;
    }

    int empty() {
        return (head == tail + 1);
    }

    int full() {
        return (tail == 9);
    }

    void append(Person p) {
        if (!full()) {
            tail++;
            queue[tail] = p;
        } else {
            cout << "Queue is Full" << endl;
        }
    }

    Person serve() {
        if (!empty()) {
            Person p = queue[head];
            head++;
            return p;
        } else {
            // Return a dummy person if empty (safety)
            Person dummy;
            dummy.flavor = 0;
            return dummy;
        }
    }
};

int main() {
    Person p;
    ADTqueue q;
    int i;

    cout << "Do you know that the flavor of ice cream can reveal one's personality?" << endl;

    // 3. Get Input Loop (for 2 persons)
    for(i = 0; i < 2; i++) {
        cout << "Enter name: ";
        cin >> p.name;
        cout << "Enter favorite flavor:\n(1=chocolate 2=vanilla 3=strawberry 4=mixed flavor)\n";
        cin >> p.flavor;
        q.append(p); // Add to queue
    }

    cout << endl;

    // 4. Output Loop (Serve and Analyze)
    while(!q.empty()) {
        Person current = q.serve();
        cout << current.name << " ";

        if (current.flavor == 1)
            cout << "Sensitive and often daydreaming about past and future." << endl;
        else if (current.flavor == 2)
            cout << "Friendly, easygoing and has many friends." << endl;
        else if (current.flavor == 3)
            cout << "Affectionate, giving, loving and very understanding." << endl;
        else if (current.flavor == 4)
            cout << "Negotiator and will do anything to avoid open conflict." << endl;
        else
            cout << "Unknown personality." << endl;
    }

    return 0;
}