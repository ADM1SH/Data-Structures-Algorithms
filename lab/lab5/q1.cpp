#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
};

// Function to display the list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int inputData;

    // a. Get 5 integers from user and insert into the linked list [cite: 4]
    for (int i = 1; i <= 5; i++) {
        cout << "Enter data " << i << ": ";
        cin >> inputData;

        Node* newNode = new Node();
        newNode->data = inputData;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // b. Display the list [cite: 5]
    cout << "\nThe Current List:" << endl;
    displayList(head);

    // c. Delete the first node and display again [cite: 6]
    while (head != NULL) {
        cout << "\nDeleting the first node" << endl;
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "The list after deletion:" << endl;
        displayList(head);
        break; // Exit the loop to only delete one node
    }

    // d. Delete the last node
    cout << "\nDeleting the last node" << endl;
    if (head != NULL) {
        // If there is only one node in the list
        if (head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
        } else {
            // Traverse to the node before the tail
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            // Delete the tail and update it
            delete tail;
            tail = current;
            tail->next = NULL;
        }
    }
    cout << "The list after deleting the last node:" << endl;
    displayList(head);

    // e. Search for data in the list [cite: 7, 8, 9]
    int searchVal;
    cout << "\nEnter a data to search: ";
    cin >> searchVal;

    bool found = false;
    Node* current = head;
    while (current != NULL) {
        if (current->data == searchVal) {
            found = true;
            break;
        }
        current = current->next;
    }

    if (found) cout << "DATA FOUND!" << endl;
    else cout << "DATA NOT FOUND!" << endl;

    return 0;
}