#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class AddAndPrint {
    private:
        Node* head;

    public:
        AddAndPrint() {
            head = nullptr;
        }

    void addItem(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << (temp->prev ? to_string((uintptr_t)temp->prev) : "NULL")
                << " <- " << temp->data 
                << " -> " << temp->next << " | <--> | ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    AddAndPrint ap;
    ap.addItem(10);
    ap.addItem(20);
    ap.addItem(30);

    ap.print();
    return 0;
}