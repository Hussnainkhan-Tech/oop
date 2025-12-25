// // // // #include <iostream>
// // // // using namespace std;

// // // // class Node {
// // // // public:
// // // //     int data;
// // // //     Node* next;
// // // //     Node(int val) { data = val; next = nullptr; }
// // // // };

// // // // class LinkedList {
// // // //     Node* head;
// // // // public:
// // // //     LinkedList() { head = nullptr; }

// // // //     void insertAtEnd(int val) {
// // // //         Node* n = new Node(val);
// // // //         if (!head) head = n;
// // // //         else {
// // // //             Node* t = head;
// // // //             while (t->next) t = t->next;
// // // //             t->next = n;
// // // //         }
// // // //     }

// // // //     void insertAtBeginning(int val) {
// // // //         Node* n = new Node(val);
// // // //         n->next = head;
// // // //         head = n;
// // // //     }

// // // //     void display() {
// // // //         Node* t = head;
// // // //         while (t) { cout << t->data << " -> "; t = t->next; }
// // // //         cout << "NULL\n";
// // // //     }
// // // // };

// // // // int main() {
// // // //     LinkedList list;

// // // //     // Existing 4-node list
// // // //     list.insertAtEnd(10);
// // // //     list.insertAtEnd(20);
// // // //     list.insertAtEnd(30);
// // // //     list.insertAtEnd(40);

// // // //     cout << "Original List:\n";
// // // //     list.display();

// // // //     // Insert at beginning
// // // //     int val;
// // // //     cout << "\nEnter value to insert at beginning: ";
// // // //     cin >> val;
// // // //     list.insertAtBeginning(val);

// // // //     cout << "\nUpdated List:\n";
// // // //     list.display();

// // // //     return 0;
// // // // }




// // // #include <iostream>
// // // using namespace std;

// // // class Node {
// // // public:
// // //     int data;
// // //     Node* next;
// // //     Node(int val) { data = val; next = nullptr; }
// // // };

// // // class LinkedList {
// // //     Node* head;
// // // public:
// // //     LinkedList() { head = nullptr; }

// // //     // Insert at end
// // //     void insertAtEnd(int val) {
// // //         Node* n = new Node(val);
// // //         if (!head) head = n;
// // //         else {
// // //             Node* t = head;
// // //             while (t->next) t = t->next;
// // //             t->next = n;
// // //         }
// // //     }

// // //     void display() {
// // //         Node* t = head;
// // //         while (t) { cout << t->data << " -> "; t = t->next; }
// // //         cout << "NULL\n";
// // //     }
// // // };

// // // int main() {
// // //     LinkedList list;

// // //     // Existing 4-node list
// // //     list.insertAtEnd(10);
// // //     list.insertAtEnd(20);
// // //     list.insertAtEnd(30);
// // //     list.insertAtEnd(40);

// // //     cout << "Original List:\n";
// // //     list.display();

// // //     // Insert at end
// // //     int val;
// // //     cout << "\nEnter value to insert at end: ";
// // //     cin >> val;
// // //     list.insertAtEnd(val);

// // //     cout << "\nUpdated List:\n";
// // //     list.display();

// // //     return 0;
// // // }


// // #include <iostream>
// // using namespace std;

// // class Node {
// // public:
// //     int data;
// //     Node* next;
// //     Node(int val) { data = val; next = nullptr; }
// // };

// // class LinkedList {
// //     Node* head;
// // public:
// //     LinkedList() { head = nullptr; }

// //     void insertAtEnd(int val) {
// //         Node* n = new Node(val);
// //         if (!head) head = n;
// //         else {
// //             Node* t = head;
// //             while (t->next) t = t->next;
// //             t->next = n;
// //         }
// //     }

// //     // Delete from beginning
// //     void deleteFromBeginning() {
// //         if (!head) {
// //             cout << "List is empty. Nothing to delete.\n";
// //             return;
// //         }
// //         Node* temp = head;
// //         head = head->next;
// //         cout << temp->data << " deleted from beginning.\n";
// //         delete temp;
// //     }

// //     void display() {
// //         if (!head) { cout << "List is empty.\n"; return; }
// //         Node* t = head;
// //         while (t) { cout << t->data << " -> "; t = t->next; }
// //         cout << "NULL\n";
// //     }
// // };

// // int main() {
// //     LinkedList list;

// //     // Existing 4-node list
// //     list.insertAtEnd(10);
// //     list.insertAtEnd(20);
// //     list.insertAtEnd(30);
// //     list.insertAtEnd(40);

// //     cout << "Original List:\n";
// //     list.display();

// //     // Delete from beginning
// //     list.deleteFromBeginning();

// //     cout << "\nUpdated List:\n";
// //     list.display();

// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int val) { data = val; next = nullptr; }
// };

// class LinkedList {
//     Node* head;
// public:
//     LinkedList() { head = nullptr; }

//     void insertAtEnd(int val) {
//         Node* n = new Node(val);
//         if (!head) head = n;
//         else {
//             Node* t = head;
//             while (t->next) t = t->next;
//             t->next = n;
//         }
//     }

//     // Delete from end
//     void deleteFromEnd() {
//         if (!head) {
//             cout << "List is empty. Nothing to delete.\n";
//             return;
//         }
//         if (!head->next) { // Only one node
//             cout << head->data << " deleted from end.\n";
//             delete head;
//             head = nullptr;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next->next) // Go to second last node
//             temp = temp->next;
//         cout << temp->next->data << " deleted from end.\n";
//         delete temp->next;
//         temp->next = nullptr;
//     }

//     void display() {
//         if (!head) { cout << "List is empty.\n"; return; }
//         Node* t = head;
//         while (t) { cout << t->data << " -> "; t = t->next; }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     LinkedList list;

//     // Existing 4-node list
//     list.insertAtEnd(10);
//     list.insertAtEnd(20);
//     list.insertAtEnd(30);
//     list.insertAtEnd(40);

//     cout << "Original List:\n";
//     list.display();

//     // Delete from end
//     list.deleteFromEnd();

//     cout << "\nUpdated List:\n";
//     list.display();

//     return 0;
// }



#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) { data = val; next = nullptr; }
};

class LinkedList {
    Node* head;
public:
    LinkedList() { head = nullptr; }

    void insertAtEnd(int val) {
        Node* n = new Node(val);
        if (!head) head = n;
        else {
            Node* t = head;
            while (t->next) t = t->next;
            t->next = n;
        }
    }

    // Insert at specific position (1-based index)
    void insertAtPosition(int val, int pos) {
        Node* n = new Node(val);
        if (pos == 1) {
            n->next = head;
            head = n;
            cout << val << " inserted at position 1.\n";
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp; i++)
            temp = temp->next;
        if (!temp) {
            cout << "Position out of bounds.\n";
            delete n;
            return;
        }
        n->next = temp->next;
        temp->next = n;
        cout << val << " inserted at position " << pos << ".\n";
    }

    void display() {
        if (!head) { cout << "List is empty.\n"; return; }
        Node* t = head;
        while (t) { cout << t->data << " -> "; t = t->next; }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    // Existing 4-node list
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);

    cout << "Original List:\n";
    list.display();

    // Insert at specific position
    int val, pos;
    cout << "\nEnter value to insert: ";
    cin >> val;
    cout << "Enter position: ";
    cin >> pos;

    list.insertAtPosition(val, pos);

    cout << "\nUpdated List:\n";
    list.display();

    return 0;
}
